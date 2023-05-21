#include<bits/stdc++.h>
using namespace std;
int subsequence(int ind,int n,vector<int>&out,int *arr,int varsum,int k)
{
    //base case
  if(ind==n)
  {
    if(varsum==k)
    {
        return 1;
    }
    return 0;
  }
  //taking a number into the array
  varsum+=arr[ind];
  int l=subsequence(ind+1,n,out,arr,varsum,k);
  varsum-=arr[ind];

  //not taking that number into the array
  int r=subsequence(ind+1,n,out,arr,varsum,k);
  return l+r;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    vector<int>out;
    int varsum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=subsequence(0,n,out,arr,varsum,k);
    cout<<ans<<"\n";
}