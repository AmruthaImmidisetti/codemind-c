#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c,max=0;
    int flag=0;
     for(int i=0;i<n;i++)
     {
         int c=0;
         for(int j=0;j<n;j++)
         {
             if(a[i]==a[j])
             {
                 c++;
             }
         }
         if(c==1)
         {
             flag=1;
             printf("%d ",a[i]);
         }
     }
     if(flag==0)   printf("-1");
}