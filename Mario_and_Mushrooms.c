#include<stdio.h>
#include<math.h>
int main()
{
int x;
scanf("%d",&x);
if(x==0) printf("NORMAL");
else if(x==1) printf("HUGE");
else if(x==2) printf("SMALL");
else if(x%3==0) printf("NORMAL");
else if(x%3==1) printf("HUGE");
else printf("SMALL");
}