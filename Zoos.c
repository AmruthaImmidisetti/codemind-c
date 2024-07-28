#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",&str);
    int z=0,o=0;
    for(int i=0;str[i]!=NULL;i++)
    {
     if(str[i]=='z') z++;
     else            o++;
    }
    if(2*z==o) printf("Yes");
    else printf("No");
    
}