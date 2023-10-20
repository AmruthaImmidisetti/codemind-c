#include<stdio.h>
int main()
{
    float salary,HRA,DA;
    scanf("%f %f %f",&salary,&HRA,&DA);
    float pf=(salary/100)*12;
    float grosssalary=salary+HRA+DA+pf;
    printf("%0.2f
",pf);
    printf("%0.2f",grosssalary);
    
    
    
    
}