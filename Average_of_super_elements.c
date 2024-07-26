#include<bits/stdc++.h>
#include<iostream>
int main()
{
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       std::cin>>arr[i];
    }
    std::sort(arr,arr+n);
    int c,flag=0;
    float d=0,qwe=0,lol=0; 
     for(int i=0;i<n;i++)
     {
         int k=arr[i];
         int c=0;
         for(int j=0;j<n;j++)
         {
            if((k==arr[j]) && k!=qwe)
            {
                c++;
            }
         }
        if(k==c)  
        {
            flag=1;
            qwe=arr[i];
            lol=lol+qwe;
            d++;
        }
     }
     if(flag==1) std::cout<<std::fixed<<std::setprecision(2)<<lol/d;
    else std::cout<<"-1"; 
}