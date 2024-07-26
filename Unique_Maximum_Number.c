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
             if(a[i]>max)
             {
                 max=a[i];
                 flag=1;
             }
         }
     }
     if(flag==1)   printf("%d",max);
     else printf("-1");
}