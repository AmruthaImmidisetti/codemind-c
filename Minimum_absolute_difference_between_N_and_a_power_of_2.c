#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p=1;
    int md=abs(n-p);
    while (p<n)
    {
        p*=2;
        int cd=abs(n-p);
        if (cd<md)
        {
            md=cd;
        }
    }
    printf("%d",md);
}