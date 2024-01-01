#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    scanf("%[^
]s",str);
    int i,a,b;
    scanf("%d%d",&a,&b);
    for(i=a;str[i]!=NULL;i++)
    {
        if(i>=a && i<=b)
        {
        	printf("%c",str[i]);
	    }
    }
}