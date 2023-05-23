#include<bits/stdc++.h>
using namespace std;
void subsequence(int ind,int n,int sum,int *arr,vector<int>&ans)
{   
    //base case
    if(ind==n)
    {
       ans.push_back(sum);
       return;
    }

    //picking the element
    sum+=arr[ind];//adding the sum
    subsequence(ind+1,n,sum,arr,ans);
    sum-=arr[ind];// removing it 
   
   //not picking the element
   subsequence(ind+1,n,sum,arr,ans);
 
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    sort(arr,arr+n);
    vector<int>ans;
    subsequence(0,n,sum,arr,ans);
    cout<<ans.size()<<"\n";
    sort(ans.begin(),ans.end());
    for(auto it:ans)
    {
      cout<<it<<" ";
    }
    cout<<"\n";
}