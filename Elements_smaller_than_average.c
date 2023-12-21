#include<stdio.h>
int main()
{
    int n,i,s=0,avg,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    
    s=s+arr[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        
      if(arr[i]<=avg)
      {
          c++;
      }
    }
    printf("%d",c);
}