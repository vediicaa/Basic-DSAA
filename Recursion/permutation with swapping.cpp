//given an array return all possible permutations of the array
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void permutation(int ind,int n,vector<vector<int>>&ans,vector<int>&arr)
{   
    //base case
   if(ind==n)
   {
    ans.push_back(arr);
    return;
   }
   for(ll i=ind;i<n;i++)
   {
    swap(arr[ind],arr[i]);
    permutation(ind+1,n,ans,arr);
    swap(arr[ind],arr[i]);
   }

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
    permutation(0,n,ans,arr);
    cout<<ans.size()<<"\n";
    sort(ans.begin(),ans.end());
    for(auto it:ans)
    {
        for(auto it1:it)
          cout<<it1<<" ";
    cout<<"\n";

    }
}