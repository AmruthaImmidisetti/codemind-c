#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
    	if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
    	{
    		c++;
		}
	}
    if(c>=26)       printf("True");
    else            printf("False");
}