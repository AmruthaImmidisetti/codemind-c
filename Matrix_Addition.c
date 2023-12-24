#include<stdio.h>
int main()
{
    int r1,c1,i,j;
    scanf("%d %d",&r1,&c1);
    int arr1[r1][c1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    int r2,c2;
    scanf("%d %d",&r2,&c2);
    int arr2[r2][c2];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    if(r1==r2 && c1==c2)
    {
        for(i=0;i<r1;i++)
      {
        for(j=0;j<c2;j++)
        {
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("
");
      }
    }
    else 
      {
          printf("Matrix is not possible");
      }


}