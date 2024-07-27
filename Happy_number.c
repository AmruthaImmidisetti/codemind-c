#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=n;
    int sum=0;
    while(sum!=1 && sum!=4) {
        sum=0;
        while(k>0)
        {
            int r=k%10;
            sum=sum+r*r;
            k/=10;
        }
        k=sum;
    }
    if(sum==1)  printf("True");
    else        printf("False");
}