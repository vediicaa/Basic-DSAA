#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define frn(i,a,b) for(ll i=a;i<b;i++)
#define fri for(auto it=mp.begin();it!=mp.end();it++)
#define its it->second 
#define itf it->first 
#define maximum *max_element
#define minimum *min_element
#define sra(a) sort(a,a+n)
#define srv(v) sort(v.begin(),v.end());
#define s second
#define f first
void merge(int input[],int si,int ei,int temp)
{
    int i=si;
    int j=temp;
    int ans[ei-si+1];
    int k=0;
    while(i<=temp-1 && j<=ei)
    {
        if(input[i]<input[j])
        {
          ans[k]=input[i];
           i++;
           k++;
        }
        else
        {
            ans[k]=input[j];
             j++;
             k++;
        }
    }
     if(j>ei)
    {
        for(;i<=temp-1;i++,k++)
            ans[k]=input[i];
    }
    else if(i>temp-1)
    {
        for(;j<=ei;j++,k++)
            ans[k]=input[j];
    }
    
    int p=0;
    for(int z=si;z<=ei;z++)
    {
        input[z]=ans[p];
        p++;
    }
    for(int i=0;i<ei-si+1;i++)
    cout<<ans[i]<<" ";
    cout<<"\n";
}
void mergesorthelp(int input[],int si,int ei)
{
    if(si>=ei)
        return;
   int mid=(si+ei)/2;
    mergesorthelp(input,si,mid);
    mergesorthelp(input,mid+1,ei);
    cout<<si<<" "<<ei<<" "<<mid+1<<"\n";
    merge(input,si,ei,mid+1);
}


void mergeSort(int input[], int size){
	// Write your code here
        mergesorthelp(input,0,size-1);
}

int main()
{
  int input[100];
  int n;
  cin>>n;
  frn(i,0,n)
  cin>>input[i];
  mergeSort(input,n);
  frn(i,0,n)
  cout<<input[i]<<" ";
  cout<<"\n";
}
    