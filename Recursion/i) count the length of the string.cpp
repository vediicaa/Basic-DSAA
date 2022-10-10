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
int length(char str[])
{
  if(str[0]=='\0')
  return 0;
  int smallStringlength=length(str+1);
  return smallStringlength+1;
}
int main()
{
  char str[100];
  cin>>str;
  int len=length(str);
  cout<<len<<"\n";
    
}
    