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
int partition(int input[],int si,int ei)
{
    int x=input[si];
   // cout<<x<<" ";
    int count=0;
    for(int i=si+1;i<=ei;i++)
    {
        if(input[i]<=x)
        count++;
    }
    input[si]=input[si+count];
    input[si+count]=x;
    int i=si;
    int j=ei;
    while(i<count+si && j>count+si)
    {
        if(input[i]<=x)
        {
            i++;
        }
        else if(input[j]>x)
        {
            j--;
        }
        else{
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j--;
        }
    }
    
    return count;
}
void quicksorthelp(int input[],int si,int ei)
{
    if(si>=ei)
    return;
    //cout<<si<<" "<<ei<<" ";
   int c=partition(input,si,ei);
   //cout<<c<<"\n";
   //int sum=sum+c+1;
   quicksorthelp(input,si,si+c-1);
   quicksorthelp(input,si+c+1,ei);
}
void quicksort(int input[],int size)
{
    quicksorthelp(input,0,size-1);
}

int main()
{
  int input[100];
  int n;
  cin>>n;
  frn(i,0,n)
  cin>>input[i];
  quicksort(input,n);
  frn(i,0,n)
  cout<<input[i]<<" ";
  cout<<"\n";
}
    