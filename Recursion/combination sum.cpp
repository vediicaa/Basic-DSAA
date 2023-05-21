#include<bits/stdc++.h>
using namespace std;
void subsequence(int ind,int n,vector<int>&out,int *arr,int varsum,vector<vector<int>>&ans)
{   
    //base case
  if(ind==n)
  {
    if(varsum==0)
    {
       ans.push_back(out);
    }

    return;
  }
  //taking a number into the array
  if(arr[ind]<=varsum)
  {out.push_back(arr[ind]);
  subsequence(ind,n,out,arr,varsum-arr[ind],ans);
  out.pop_back();
  }
  //not taking that number into the array
  subsequence(ind+1,n,out,arr,varsum,ans);
 
}
int main()
{
    int n,varsum;
    cin>>n>>varsum;
    int arr[n];
    vector<int>out;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<vector<int>>ans;
    subsequence(0,n,out,arr,varsum,ans);
    for(auto it:ans)
    {
        for(int i=0;i<it.size();i++)
        {
            cout<<it[i]<<" ";
        }
        
    cout<<"\n";
}
}