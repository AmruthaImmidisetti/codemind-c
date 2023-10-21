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
        unitcost=1.50;
    }
    else if(unit>=400 && unit<600)
    {
        unitcost=1.80;
    }
    else
    {
        unitcost=2.00;
    }
    float bill,tbill;
    bill=unit*unitcost;
    if(bill>400)
    {
        tbill=bill+(bill*0.15);
    }
    else
    {
        tbill=bill+100;
    }
        
    printf("%.2f",tbill);
}