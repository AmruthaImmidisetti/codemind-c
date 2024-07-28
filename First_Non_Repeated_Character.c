#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",&str);
        int c,flag=0;;
        char q;
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
            if(c==1)
            {
                flag=1;
               q=str[i];
                break;
            }
        }
        if(flag==0) printf("-1
");
        else        printf("%c
",q);
    }
}