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
    int c,d=0,lol=0; 
     for(int i=0;i<n;i++)
     {
         int k=arr[i];
         int c=0;
         for(int j=0;j<n;j++)
         {
            if((k==arr[j]) && k!=lol)
            {
                c++;
            }
         }
        if(k==c)  
        {
            lol=arr[i];
            d++;
        }
     }
     std::cout<<d;
         
}