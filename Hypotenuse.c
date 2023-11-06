#include<stdio.h>
#include<math.h>
int main()
{
    double a,c;
    scanf("%lf %lf",&a,&c);
     float hyp=sqrt(a*a+c*c);
     printf("%.2f",hyp);
}