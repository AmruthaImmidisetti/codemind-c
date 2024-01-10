#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    int t=n;
    int sq=n*n;
    while(n!=0)
    {
        c++;
        n/=10;
    }
    int k=pow(10,c);
    int r=sq%k;
    if(r==t)        printf("Automorphic Number");
    else            printf("Not an Automorphic Number");
}