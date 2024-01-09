#include<stdio.h>
#include<math.h>
int main()
{
 	int n,d,r=0,rr=0,r1,r2,k;
 	scanf("%d%d",&n,&d);
 	k=pow(10,d);
 	r1=n%k;
	while(n!=0)
	{
		r=r*10;
    	r=r+n%10;
    	n/=10;
    }
    r2=r%k;
    while(r2!=0)
	{
		rr=rr*10;
    	rr=rr+r2%10;
    	r2/=10;
    }
    if(r1>rr)   printf("%d",r1-rr);
    else        printf("%d",rr-r1);
}