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
   // set<int>ans;
    int c,d=0,w=0,lol=0; 
     for(int i=0;i<n;i++)
     {
         c=0;
         for(int j=0;j<n;j++)
         {
             if((arr[i]==arr[j]) && arr[i]!=lol)
             {
                 c++;//4
             }
         }
         if(c%2==0)   
         {
             lol=arr[i];//10
            w=w+(c/2);//2
             d++;//1
         }
         else if(c%2!=0)
         {
             lol=arr[i];
             c=c-1;
             w=w+(c/2);//3
         }
     }
     std::cout<<w;
         
}