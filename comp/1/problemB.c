/*#include<stdio.h>
int b[20],end=0,n,a=1,sum=0,attempt=0;
void push(int k)
{
    b[end]=k;
    end++;
}
void pop()
{
    b[end-1]=0;
    end--;
}
void s(int k)
{
    int temp=0;
    int i,j;
    if(k==n)
    {
        sum+=1;
        attempt++;
        if(attempt<=3)
        {
            for(j=0; j<n; j++)
            {
                printf("%d ",b[j]+1);
            }
            printf("\n");
        }

        return;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            a=1;
            for(j=0;j<end;j++)
            {
                if(i==b[j])
                {
                    a=0;
                }
                if(b[j]-i==k-j)
                {
                    a=0;
                }
                if(i-b[j]==k-j)
                {
                    a=0;
                }
            }
            if(a==1)
            {
                push(i);
                s(k+1);
                pop();
            }
            else
            {
                temp++;
            }


        }

    }
}
int main()
{
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        push(i);
        s(1);
        for(j=0; j<=end; j++)
        {
            b[j]=0;
        }
        end=0;
    }
    printf("%d",sum);
    return 0;
}*/
/*#include <cmath>

#define MAX_SIZE 8
// �ִ� MAX_SIZE queen �������� �ذ��� �� �ִ�.

using namespace std;

int board[MAX_SIZE];
// board[i]�� i��° �࿡ ���� ���° ���� �ִ��� �ǹ��ϴ� �����̴�. (�࿭�� ���� �ٲ� �ȴ�.)
// �� board[0] = 3�϶�, (1,4) Ȥ�� (4,1) ��ġ�� ���� �ִٴ� ���̴�.
int n;
int cnt;

void path(int y) {
	// y�� ���� ��� ���� ��ġ�Ǿ������� �ǹ��ϴ� ������.
	int ko;
	if( y == n ) {
		// n���� ���� ��ġ�� �Ǿ��ٸ� �� ���� ���̴�.
		cnt++;
		return;
	}
	for( int i=0; i<n; i++ ) {
		// ko�� ���� ��ġ�� �� �ִ����� �����ϴ� �÷��״�.
		ko = 1;
		for( int j=0; j<y; j++ ) {
			// �̹� ��ġ�� ���� ���� �����ؼ� i��° ĭ�� ���� ��ġ�� �� �ִ����� Ȯ���Ѵ�.
			if( board[j] == i || abs(y-j) == abs(i-board[j]) ) {
				// j��° �ٿ� �ִ� ���� ���� ĭ�� �ְų�, �밢���� ���� ���� �ִٸ�, i��° ĭ�� ���� Ž���� �ߴ��Ѵ�.
				ko = 0;
				break;
			}
		}
		if( ko ) {
			// ������� �Դٸ� y��° �ٿ� i��° ĭ�� ���� ���δ� ���� �����ϴ�.
			board[y] = i;
			path(y+1);
		}
	}
}

int main() {
	int k;
	cin >> k;

	while( k-- ) {
		cin >> n;
		cnt = 0;
		path(0);

		cout << cnt << '\n';
	}

	return 0;
}*/
#include <stdio.h>
int col[20],row[20],tr1[50],tr2[50],n,t=0;
void f(int k)
{
    if(k==n)
    {
        if(t<=2)
        {
            for(int i=0; i<n; i++)
            {
                printf("%d ",row[i]);
            }
            printf("\n");
        }
        t++;
    }
    for(int i=0; i<n ; i++)
    {
        if((tr1[i+k]==1)||(tr2[n+i-k]==1)||(col[i]==1))
        {
            continue;
        }
        tr1[i+k]=tr2[n+i-k]=col[i]=1;
        row[k]=i+1;
        f(k+1);
        tr1[i+k]=tr2[n+i-k]=col[i]=0;
    }
}
int main()
{
    scanf("%d",&n);
    f(0);
    printf("%d",t);
    return 0;
}
