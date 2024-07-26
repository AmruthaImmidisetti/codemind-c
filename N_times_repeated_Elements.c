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
    int k;
    std::cin>>k;
   int c;
   std::vector<int>qwert;
   std::set<int>ans;
    for(int i=0;i<n;i++)
    {
        c=0;
        int q=arr[i];
        for(int j=0;j<n;j++)
        {
            if(q==arr[j])  c++;
        }
        if(c==k)   ans.insert(q);
    }
    for(auto o : ans)
    {
        qwert.push_back(o);
    }
    int d=qwert.size();
    if(d==0) std::cout<<"-1";
    for(auto a : qwert)
    {
        std::cout<<a<<" ";
    }
}