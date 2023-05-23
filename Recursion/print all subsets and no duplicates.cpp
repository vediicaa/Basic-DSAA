//subset sum 2---> print subset sum but no duplicates
//----> brute force would to use a set and store the elements but interviewer will not be happy
//----> optimised approach is to make change in the recursion whose code is shown below
//generating unique sublist of size from 1 to n 
// time complexity:(2^n*n)
// space complexity: (2^n*k)
//auxiliary space complexity: o(n)
#include<bits/stdc++.h>
using namespace std;
void subsequence(int ind,int n,vector<int>out,vector<vector<int>>&ans,vector<int>&arr)
{   
    ans.push_back(out);
    for(int i=ind;i<arr.size();i++)
    {
       if(i!=ind && arr[i]==arr[i-1]) continue;
       out.push_back(arr[i]);
       subsequence(i+1,n,out,ans,arr);
       out.pop_back();
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
    int sum=0;
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    subsequence(0,n,out,ans,arr);
    cout<<ans.size()<<"\n";
    sort(ans.begin(),ans.end());
    for(auto it:ans)
    {
        for(auto it1:it)
          cout<<it1<<" ";
    cout<<"\n";

    }
}