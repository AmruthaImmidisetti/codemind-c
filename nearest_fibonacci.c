#include<stdio.h>
int main()
{
	int f=0,s=1,t=0,n;
	scanf("%d",&n);
	while(n>t)
	{
		t=f+s;
		f=s;
		s=t;
	}
	if(n-f<s-n)
	{
		printf("%d",f);
	}
	else if(n-f==s-n)
	{
		printf("%d %d",f,s);
	}
	else
	{
		printf("%d",s);
	}
}