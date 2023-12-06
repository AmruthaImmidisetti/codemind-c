#include<stdio.h>
int main()
{
    int a,b,i,j,c=0;
   scanf("%d %d",&a,&b);//1 3
   int d=a+b;
	for(i=d+1;;i++)//4 
    {
    	c=0;
      for(j=1;j<=i;j++)
      {
          if(i%j==0)
          {
              c++;
          }
      }
      if(c==2) 
		  {
		  //printf("%d
",i);
		  printf("%d",i-d);
          break;
      		}
      
    }
   
}