//given an array return all possible permutations of the array
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void permutation(int n,vector<int>out,vector<vector<int>>&ans,vector<int>&arr,map<ll,ll>&mp)
{   
    //base case
    if(out.size()==n)
    {
        ans.push_back(out);
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==0)
        {
            out.push_back(arr[i]);
            mp[arr[i]]=-1;
            permutation(n,out,ans,arr,mp);
            out.pop_back();
            mp[arr[i]]=0;
        }
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> out;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<vector<int>>ans;
    map<ll,ll> mp;
    permutation(n,out,ans,arr,mp);
    cout<<ans.size()<<"\n";
    sort(ans.begin(),ans.end());
    for(auto it:ans)
    {
        for(auto it1:it)
          cout<<it1<<" ";
    cout<<"\n";

    }
}