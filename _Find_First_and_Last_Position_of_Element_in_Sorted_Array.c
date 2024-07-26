#include<bits/stdc++.h>
int main()
{
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    int a;
    std::cin>>a;
    std::vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a) 
        {
            int q=i;
            ans.push_back(q);
            break;
        } 
    }
    for(int i=n-1;i>=0;i--)
    {
         if(arr[i]==a) 
        {
            int q=i;
            ans.push_back(q);
            break;
        } 
    }
    if(ans.size()==0)  std::cout<<"-1"<<" "<<"-1";
    else 
    {
        /*for(auto e:ans)
        {
            std::cout<<e;
        }*/
        std::cout<<ans[0]<<" "<<ans[1];
    }
    
}