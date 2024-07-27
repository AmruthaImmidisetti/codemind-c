#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n==0) printf("Not Ugly Number");
    //if(n==1) printf("Ugly Number");

    int factors[] = {2, 3, 5};
    for (int i = 0; i < 3; ++i) {
        while (n % factors[i] == 0) {
            n /= factors[i];
        }
    }

    if(n==1) printf("Ugly Number
");
    else printf("Not Ugly Number
");
}