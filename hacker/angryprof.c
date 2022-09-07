//7sept
#include<stdio.h>

int main()
{
    int i,k,n,t,time;
    int c=0;
    scanf("%d",&t)
    while(t--)
    {
        scanf("%d %d", &n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d", &time);
            if(time<=0)
            {
                count++;
            }
        }
        puts((count<k)?"YES" : "NO");
    }
    return 0;
}