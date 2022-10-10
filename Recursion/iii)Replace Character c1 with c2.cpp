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
void replaceCharacter(char input[],char c1,char c2)
{
    if(input[0]=='\0')
    return;
    if(input[0]!=c1)
    replaceCharacter(input+1,c1,c2);
    else
    {
        input[0]=c2;
        replaceCharacter(input+1,c1,c2);
    }
}

int main()
{
  char str[100];
  cin>>str;
  char c1,c2;
  cin>>c1>>c2;
    replaceCharacter(str,c1,c2);
    cout<<str<<"\n";
 
}
    