#include<stdio.h>
int main()
{
 int n,i,sum=0,flag=0;
 scanf("%d",&n);
 int arr[n];
  for(i=0;i<n;i++)
  {
     scanf("%d",&arr[i]);
  }
  int r,c=0;
  scanf("%d",&r);
  for(i=0;i<n;i++)
  {
  	if(arr[i]==r)
  	{
  		c++;
	}
  }
  if(c>0) printf("%d",c);
  else        printf("0");
}