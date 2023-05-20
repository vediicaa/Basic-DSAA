#include<bits/stdc++.h>
using namespace std;
void subsequence(int ind,int n,vector<int>&out,int *arr,int varsum,int k)
{
    //base case
  if(ind==n)
  {
    if(varsum==k)
    {
        for(auto it:out)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    return;
  }
  //taking a number into the array
  out.push_back(arr[ind]);
  varsum+=arr[ind];
  subsequence(ind+1,n,out,arr,varsum,k);
  out.pop_back();
  varsum-=arr[ind];
  //not taking that number into the array
  subsequence(ind+1,n,out,arr,varsum,k);
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
    subsequence(0,n,out,arr,varsum,k);
}