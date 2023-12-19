#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++) printf("%d",j);
        for(k=n-i;k>=1;k--) printf("*");
        printf("
");
    }
    
    
}