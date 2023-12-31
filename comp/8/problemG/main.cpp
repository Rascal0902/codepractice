#include<stdio.h>
#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int v[1005][85],H,W,ans[100000000],cnt=0;
char map1[1005][85];
queue <pair<int, int> > bfs,bfs2;
int main()
{
    scanf("%d %d",&W,&H);
    for(int i=0;i<H;i++)
    {
        scanf(" %s",map1[i]);
        for(int j=0;j<W;j++)
        {
            if(map1[i][j]=='*')
            {
                bfs.push( { i,j } );
            }
        }
    }
    int x,y,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},sum=0;
    while(!bfs.empty())
    {
        if((map1[(bfs.front()).first][(bfs.front()).second]!='.')&&(v[(bfs.front()).first][(bfs.front()).second]==0))
        {
            sum=0;
            bfs2.push( { (bfs.front()).first,(bfs.front()).second } ) ;
            while(!bfs2.empty())
            {
                x=(bfs2.front()).first;y=(bfs2.front()).second;
                sum++;
                bfs2.pop();
                v[x][y]=1;
                for(int i=0;i<4;i++)
                {
                    if((v[x+dx[i]][y+dy[i]]==0)&&(map1[x+dx[i]][y+dy[i]]=='*')&&(x+dx[i]>=0)&&(x+dx[i]<H)&&(y+dy[i]>=0)&&(y+dy[i]<W))
                    {
                        v[x+dx[i]][y+dy[i]]=1;
                        bfs2.push( { x+dx[i],y+dy[i] } );
                    }
                }
            }
            ans[cnt]=sum;
            cnt++;
        }
        bfs.pop();
    }
    int max=0;
    for(int i=0;i<cnt;i++)
    {
        if(max<ans[i])
        {
            max=ans[i];
        }

    }
    printf("%d",max);
    return 0;
}
