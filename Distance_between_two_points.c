#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,a1,b1;
    scanf("%d %d %d %d",&a,&b,&a1,&b1);
     float dist=sqrt((a-a1)*(a-a1)+(b-b1)*(b-b1));
     printf("%0.4f",dist);
    
}