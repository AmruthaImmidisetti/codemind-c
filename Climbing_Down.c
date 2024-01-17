#include <stdio.h>
int main()
{
    int A,B,X,Y;
    scanf("%d%d%d%d",&A,&B,&X,&Y);
    float tWalter=(float)A/X;
    float tJesse=(float)B/Y;
    if(tWalter<tJesse)
    {
        printf("Walter");
    }
    else if(tWalter>tJesse)
    {
        printf("Jesse");
    }
    else
    {
        printf("Both");
    }
}