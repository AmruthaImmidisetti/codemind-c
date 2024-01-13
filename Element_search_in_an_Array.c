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
  int r;
  scanf("%d",&r);
  for(i=0;i<n;i++)
  {
  	if(r==arr[i])
  	{
  		flag=1;
	}
  }
  if(flag==1) printf("True");
  else        printf("False");
}