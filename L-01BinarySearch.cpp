#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define frn for(ll i=0;i<n;i++)
int main()
{
 ll n;
 cin>>n;
 ll arr[n];
 frn
 {
    cin>>arr[i];
 }
 ll t;
 cin>>t;
 while(t--)
 {
    ll x;
    cin>>x;
    ll f=0;ll l=n-1;
    ll index;
    ll flag=0;
    ll mid;
    for(ll i=f;i<=l;i++)
    {
        mid=(f+l)/2;
        if(x==arr[mid])
        index=mid;
        else if(x>arr[mid])
        {
            f=mid+1;
        }
        else if(x<arr[mid])
        l=mid-1;
        else if(f>l)
        {
            flag=1;
            break;
        }
    }
    if(f>l)
    cout<<"Not found"<<"\n";
    else
    cout<<index<<"\n";
 }
}