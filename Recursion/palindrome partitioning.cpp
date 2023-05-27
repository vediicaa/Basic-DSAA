// Generate all possible substrings which are palindrome
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPalindrome(string s)
{
    int n=s.size();
  for(int i=0;i<s.size();i++)
  {
    if(s[i]!=s[n-i-1])
    return false;
  }
  return true;
}

void Permutation(int ind,int n,string str,vector<string>&out,vector<vector<string>>&ans)
{   
   if(ind==n)
   {
    ans.push_back(out);
    return;
   }
   for(int i=1;i<n-ind+1;i++)
   {
    string s=str.substr(ind,i);
    if(isPalindrome(s))
    {
        out.push_back(s);
        Permutation(ind+i,n,str,out,ans);
        out.pop_back();
    }
   }
}
int main()
{
    int n;
    cin>>n;
    vector<string>out;
    vector<vector<string>>ans;
    string str;
    cin>>str;
    Permutation(0,n,str,out,ans);
    
    for(auto it:ans)
    {
        for(auto it1:it)
          {
            cout<<it1<<" ";
          }
    cout<<"\n";
    }
}