#include<bits/stdc++.h>
using namespace std;
void subsequence(int ind,int n,vector<int>&out,int *arr)
{
    //base case
  if(ind==n)
  {
    for(auto it:out)
    {
        cout<<it<<" ";
    }
    if(out.size()==0)
    cout<<"{}";
    cout<<"\n";
    return;
  }
  //taking a number into the array
  out.push_back(arr[ind]);
  subsequence(ind+1,n,out,arr);
  out.pop_back();
  //not taking that number into the array
  subsequence(ind+1,n,out,arr);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>out;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    subsequence(0,n,out,arr);
}