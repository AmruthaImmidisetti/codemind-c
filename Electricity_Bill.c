#include<stdio.h>
int main()
{
    int unit;
    float unitcost;
    scanf("%d",&unit);
    if(unit<=199) 
    {
       unitcost=1.20; 
    }
    else if(unit>=200 && unit<400) 
    {
        unitcost=1.40;
    }
    else if(unit>=400 && unit<600)
    {
        unitcost=1.60;
    }
    else if(unit>=600 && unit<800)
    {
        unitcost=1.80;
    }
    else 
    {
        unitcost=2.00;
    }
    float bill,tbill,sc;
    bill=unit*unitcost;
    
    if(bill>400) 
    {
    	sc=(bill*0.15);
        tbill=bill+sc;
    }
    else 
    {
        tbill=bill+0;
    }
    printf("Units Consumed: %.2d
",unit);
    printf("Cost per Unit: %.2f
",unitcost);
    printf("Bill: %.2f
",bill);
    printf("Surcharge: %.2f
",sc);
    printf("Total Amount: %.2f
",tbill);
    
}