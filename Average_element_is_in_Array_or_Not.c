#include<stdio.h>
int main()
{
 int n,i,sum=0,flag=0,c=0;
 scanf("%d",&n);
 int arr[n];
 for(i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
     sum=sum+arr[i];
     c++;
 }
 float avg=sum/c;
 
     for(i=0;i<n;i++)
     {
     if(avg==arr[i]) 
        {
            printf("True");
     flag=1;
     
     break;
        }
     }
 if(flag==0) printf("False");
}