#include<stdio.h>
int main()
{
    int a,b,i,c=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%3==0) {
            c++; //c=c+1 when c=0
        }
    }
    printf("%d",c);
  }