#include<stdio.h>
int main()
{
    int n,even,odd;
    scanf("%d",&n);
    if(n%2==0)
    {
        even=(n/2);
        odd=n-even;
    }
    else
    {
        odd=(n/2)+1;
        even=n-odd;
    }
     int magicpair=(even*odd*2);
     printf("%d",magicpair);
    
}