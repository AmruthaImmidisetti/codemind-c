#include<stdio.h>
int main()
{
    int m,i,flag=1;
    scanf("%d",&m);
    int arr[m];
    for(i=0;i<m;i++)
    {    
        scanf("%d",&arr[i]);
    }
    for(i=0;i<m;i++)
    {
        if(arr[i]%2!=0)
        {
            flag=0;
        }
    }
    if(flag==1) printf("True");
    else printf("False");
}