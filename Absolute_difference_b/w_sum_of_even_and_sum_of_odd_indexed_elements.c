#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,s=0,sum=0;
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
       if(i%2==0) 
       {
          sum=sum+arr[i];
       }
       else 
       {
           s=s+arr[i];
       }
    }
    if(sum>s) printf("%d",sum-s);
    else    printf("%d",s-sum);
}