//Rat in a Maze
//Print all possible ways of mobinfg from (0,0) to (n-1,n-1) wihtout stepping on zero and print the answer in lexicographical order
// time complexity : 4^(n*m)---> checking 4 possibilities for each cell
//Space Compelxity : O(m*n)----> maz=ximum depth of the recursion tree(auxiliary space)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void Maze(int ind,int jind,int n,vector<vector<int>>&arr,vector<char>&out,vector<vector<char>>&ans,vector<vector<int>>&vis)
{   
   if(ind==n-1 && jind==n-1)
   {
    ans.push_back(out);
    return;
   }
   //moving downwards
   ll i=ind;
   ll j=jind;
    if(i!=n-1 && vis[i+1][j]!=1 && arr[i+1][j]!=0)
    {
      vis[i][j]=1;
      out.push_back('D');
      Maze(i+1,j,n,arr,out,ans,vis);
      vis[i][j]=0;
      out.pop_back();
    }
    //move leftwards
    i=ind;
    j=jind;
    if(i!=0 && vis[i-1][j]!=1 && arr[i-1][j]!=0)
    {
      vis[i][j]=1;
      out.push_back('L');
      Maze(i-1,j,n,arr,out,ans,vis);
      vis[i][j]=0;
      out.pop_back();
    }
    //move rightwards
    i=ind;
    j=jind;
    if(j!=n-1 && vis[i][j+1]!=1 && arr[i][j+1]!=0)
    {
      vis[i][j]=1;
      out.push_back('R');
      Maze(i,j+1,n,arr,out,ans,vis);
      vis[i][j]=0;
      out.pop_back();
    }
    //move upwards
    i=ind;
    j=jind;
    if(j!=0 && vis[i][j-1]!=1 && arr[i][j-1]!=0)
    {
      vis[i][j]=1;
      out.push_back('U');
      Maze(i,j-1,n,arr,out,ans,vis);
      vis[i][j]=0;
      out.pop_back();
    }
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>arr(n);
    for(ll i=0;i<n;i++)
    {
      arr[i]=vector<int>(n);
      for(ll j=0;j<n;j++)
      {
        cin>>arr[i][j];
      }
    }
    vector<char>out;
    vector<vector<char>>ans;
    vector<vector<int>>vis(n,vector<int>(n,0));
    Maze(0,0,n,arr,out,ans,vis);
    
    for(auto it:ans)
    {
        for(auto it1:it)
          {
            cout<<it1<<" ";
          }
    cout<<"\n";
    }
}