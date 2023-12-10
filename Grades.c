#include<stdio.h>
int main()
{
    int p,c,b,m,cs;
    scanf("%d %d %d %d %d",&p,&c,&b,&m,&cs);
    float total=(p+c+b+m+cs);
    float perc=total/5.0;
    if(perc>=90)      printf("Grade A");
    else if(perc>=80) printf("Grade B");
    else if(perc>=70) printf("Grade C");
    else if(perc>=60) printf("Grade D");
    else if(perc>=40) printf("Grade E");
    else              printf("Grade F");
    
}