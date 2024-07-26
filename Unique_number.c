#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[1000];
    sprintf(str,"%d",n);
    int flag=1;
    int c;
    for(int i=0;str[i]!=NULL;i++)
    {
        c=0;
        for(int j=0;str[j]!=NULL;j++)
        {
            if(str[i]==str[j])
            {
                c++;
            }
        }
        if(c>1)  {
            flag=0;
            break;
        }
    }
    if(flag==0) printf("Not Unique Number");
   else printf("Unique Number");
}