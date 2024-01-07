#include<stdio.h>//string lwrcase count
int main()
{
	char str[1000];
	scanf("%[^
]s",str);
	int i,c=0;
	for(i=0;str[i]!=NULL;i++)
	{
	   if(str[i]=='a' || str[i]=='e' || str[i]=='i'||str[i]=='o'||str[i]=='u')
	   {
	       c++;
	   }
	   
	}
   printf("%d",c);
}