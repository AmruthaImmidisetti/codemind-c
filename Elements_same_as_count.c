#include <stdio.h>
int main()
{
    int arr[100],flag=0;
    int size, i, j, c;
    scanf("%d",&size);
    for(i=0;i<size;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;++i)
    {
        c=0;
        for(j=0;j<size;++j)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(arr[i]==c)
        {
            printf("%d ",arr[i]);
            arr[i]=-1;
            flag=1;
        }
    }
    if(flag==0)    printf("-1");
}