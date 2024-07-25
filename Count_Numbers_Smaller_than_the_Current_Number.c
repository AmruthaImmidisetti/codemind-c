#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c;
    
    for(int i=0;i<n;i++)
    {
        c=0;
        int k=a[i];
        for(int j=0;j<n;j++)
        {
            if(a[j]<k &&j!=i) c++;
        }
         printf("%d ",c);
    }
   
}