#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,sq,a;
    scanf("%d",&n);
    int t=n;
    sq=n*n;
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    int k=pow(10,c);
    a=sq%k;
    if(a==t) printf("Automorphic Number");
    else     printf("Not an Automorphic Number");
}