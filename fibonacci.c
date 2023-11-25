#include<stdio.h>
int main()
{
    int n,i,t,f=1,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i<1) 
        {
            t=i;
        }
        else 
        {
            t=f+s;
            f=s;
            s=t;
        }
        printf("%d ",t);
    }
}