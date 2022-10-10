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
void removeConsecutiveDuplicates(char input[])
{
    if(input[0]=='\0')
    return;
    if(input[0]!=input[1])
    removeConsecutiveDuplicates(input+1);
    else
    {
        int i;
        for( i=0;input[i+1]!='\0';i++)
        {
            input[i]=input[i+1];
        }
          input[i]=input[i+1];
          removeConsecutiveDuplicates(input);
            }
}

int main()
{
  char str[100];
  cin>>str;
  char c1,c2;
  cin>>c1>>c2;
    removeConsecutiveDuplicates(str);
    cout<<str<<"\n";
 
}
    