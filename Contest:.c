#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    y=y*1;
    z=z*2;
   int res=y+z;
    if(res>=x) printf("Qualify");
    else printf("Not Qualify");
}