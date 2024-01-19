#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int i,j,arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    	{
    	    scanf("%d",&arr[i][j]);
    	}
    }
    int rsum,rmax=0;
    for(i=0;i<r;i++)
    {
        rsum=0;
        for(j=0;j<c;j++)
    	{
    	    rsum+=arr[i][j];
    	}
    	if(rsum>rmax)
    	{
    	    rmax=rsum;
    	}
    }
    int csum,cmax=0;
    for(j=0;j<c;j++)
    {
        csum=0;
        for(i=0;i<r;i++)
    	{
    	    csum+=arr[i][j];
    	}
    	if(csum>cmax)
    	{
    	    cmax=csum;
    	}
    }
    if(rmax>cmax)       printf("%d",rmax);
    else                printf("%d",cmax);
}