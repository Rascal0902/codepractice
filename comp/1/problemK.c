/*#include<stdio.h>
int a[25],b[25],i,t=0,m=0,k=0,x=0,c[25],d[25],max=25;
int main()
{
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
        c[i]=a[i];
        d[i]=a[i];
    }
    for(i=2;i<20;i++)
    {
        if(a[i-2]==0)
        {
            continue;
        }
        else
        {
            if(a[i-1]==1)
            {
                if(a[i]==0)
                {
                    a[i-2]=0;
                    a[i-1]=0;
                    a[i]=1;
                    t++;
                }
                else
                {
                    a[i-2]=0;
                    a[i-1]=0;
                    a[i]=0;
                    t++;
                    i++;
                }
            }
            else
            {
                if(a[i]==0)
                {
                    a[i-2]=0;
                    a[i-1]=1;
                    a[i]=1;
                    t++;
                }
                else
                {
                    a[i-2]=0;
                    a[i-1]=1;
                    a[i]=0;
                    t++;
                }
            }
        }
    }
    if(c[0]==1)
    {
        if(c[1]==1)
        {
            c[0]=0;
            c[1]=0;
            k++;
        }
        else
        {
            c[0]=0;
            c[1]=1;
            k++;
        }
    }
    else
    {

        if(c[1]==1)
        {
            c[0]=1;
            c[1]=0;
            k++;
        }
        else
        {
            c[0]=1;
            c[1]=1;
            k++;
        }

    }
    for(i=2;i<20;i++)
    {
        if(c[i-2]==0)
        {
            continue;
        }
        else
        {
            if(c[i-1]==1)
            {
                if(c[i]==0)
                {
                    c[i-2]=0;
                    c[i-1]=0;
                    c[i]=1;
                    k++;
                }
                else
                {
                    c[i-2]=0;
                    c[i-1]=0;
                    c[i]=0;
                    k++;
                    i++;
                }
            }
            else
            {
                if(a[i]==0)
                {
                    c[i-2]=0;
                    c[i-1]=1;
                    c[i]=1;
                    k++;
                }
                else
                {
                    c[i-2]=0;
                    c[i-1]=1;
                    c[i]=0;
                    k++;
                }
            }
        }
    }
    for(i=17;i>=0;i--)
    {
        if(b[i+2]==0)
        {
            continue;
        }
        else
        {
            if(b[i+1]==1)
            {
                if(b[i]==0)
                {
                    b[i+2]=0;
                    b[i+1]=0;
                    b[i]=1;
                    m++;
                }
                else
                {
                    b[i+2]=0;
                    b[i+1]=0;
                    b[i]=0;
                    m++;
                    i--;
                }
            }
            else
            {
                if(b[i]==0)
                {
                    b[i+2]=0;
                    b[i+1]=1;
                    b[i]=1;
                    m++;
                }
                else
                {
                    b[i+2]=0;
                    b[i+1]=1;
                    b[i]=0;
                    m++;
                }
            }
        }
    }
    if(d[18]==1)
    {
        if(d[19]==1)
        {
            d[18]=0;
            d[19]=0;
            x++;
        }
        else
        {
            d[18]=0;
            d[19]=1;
            x++;
        }
    }
    else
    {

        if(d[19]==1)
        {
            d[18]=1;
            d[19]=0;
            x++;
        }
        else
        {
            d[18]=1;
            d[19]=1;
            x++;
        }

    }
    for(i=17;i>=0;i--)
    {
        if(d[i+2]==0)
        {
            continue;
        }
        else
        {
            if(d[i+1]==1)
            {
                if(d[i]==0)
                {
                    d[i+2]=0;
                    d[i+1]=0;
                    d[i]=1;
                    x++;
                }
                else
                {
                    d[i+2]=0;
                    d[i+1]=0;
                    d[i]=0;
                    x++;
                    i--;
                }
            }
            else
            {
                if(b[i]==0)
                {
                    d[i+2]=0;
                    d[i+1]=1;
                    d[i]=1;
                    x++;
                }
                else
                {
                    d[i+2]=0;
                    d[i+1]=1;
                    d[i]=0;
                    x++;
                }
            }
        }
    }
   //printf("%d %d %d %d",x,k,m,t);
   if(max>=x)
   {
       max=x;
   }
   if(max>=k)
   {
       max=k;
   }
    if(max>=m)
   {
       max=m;
   }
    if(max>=t)
   {
       max=t;
   }
   printf("%d",max);
    return 0;
}
*/
#include<stdio.h>
int a[25],b[25],i,sum1=0,sum2=1;
int main()
{
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    if((b[0]==0)&&(b[1]==0))
    {
        b[0]=1;
        b[1]=1;
    }
    else if((b[0]==1)&&(b[1]==0))
    {
        b[0]=0;
        b[1]=1;
    }
    else if((b[0]==0)&&(b[1]==1))
    {
        b[0]=1;
        b[1]=0;
    }
    else
    {
        b[0]=0;
        b[1]=0;
    }
        for(i=2;i<20;i++)
    {
        if(a[i-2]==0)
        {
            continue;
        }
        else
        {
            if(a[i-1]==1)
            {
                if(a[i]==0)
                {
                    a[i-2]=0;
                    a[i-1]=0;
                    a[i]=1;
                    sum1++;
                }
                else
                {
                    a[i-2]=0;
                    a[i-1]=0;
                    a[i]=0;
                    sum1++;
                }
            }
            else
            {
                if(a[i]==0)
                {
                    a[i-2]=0;
                    a[i-1]=1;
                    a[i]=1;
                    sum1++;
                }
                else
                {
                    a[i-2]=0;
                    a[i-1]=1;
                    a[i]=0;
                    sum1++;
                }
            }
        }
    }
    if((a[18]==1)&&(a[19]==1))
       {
           sum1++;
       }
    for(i=2;i<20;i++)
    {
        if(b[i-2]==0)
        {
            continue;
        }
        else
        {
            if(b[i-1]==1)
            {
                if(b[i]==0)
                {
                    b[i-2]=0;
                    b[i-1]=0;
                    b[i]=1;
                    sum2++;
                }
                else
                {
                    b[i-2]=0;
                    b[i-1]=0;
                    b[i]=0;
                    sum2++;
                }
            }
            else
            {
                if(b[i]==0)
                {
                    b[i-2]=0;
                    b[i-1]=1;
                    b[i]=1;
                    sum2++;
                }
                else
                {
                    b[i-2]=0;
                    b[i-1]=1;
                    b[i]=0;
                    sum2++;
                }
            }
        }
    }
    if((b[18]==1)&&(b[19]==1))
       {
           sum2++;
       }
       printf("%d",(sum1>sum2)?sum2:sum1);
       return 0;
}
