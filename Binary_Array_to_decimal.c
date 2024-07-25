#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int dec=0,qw=n-1;
     for(int i=0;i<n;i++)
     {
        dec+=pow(2,qw--)*arr[i];
     }
     printf("%d",dec);
}