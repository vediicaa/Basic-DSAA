// generate a baords where each column and row have a queen but no one should be attacking each other
//Method 1: O(n!*n)
//checking all possible ways 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isSafe(vector<string>&board,int row,int col,int n)
{
    ll i=row;
    ll j=col;
    //checking diagonally upwards and backwards
    while(i>=0 && j>=0)
    {
        if(board[i][j]=='Q') return false;
        i--;
        j--;
    }
    i=row;
    j=col;
    // checking horizontally backwards
    while(j>=0)
    {
        if(board[i][j]=='Q') return false;
        j--;
    }
    i=row;
    j=col;
    // checking diagonally downwards and backwards
    while(i<n && j>=0)
    {
        if(board[i][j]=='Q') return false;
        i++;
        j--;
    }
    return true;
}
void Queens(int n,int col,vector<string>&board,vector<vector<string>>&ans)
{   
    //base case
   if(col==n)
   {
    ans.push_back(board);
    return;
   }
   for(ll row=0;row<n;row++)
   {
    if(isSafe(board,row,col,n))
    {
        board[row][col]='Q';
        Queens(n,col+1,board,ans);
        board[row][col]='.';
    }
   }
}
int main()
{
    int n;
    cin>>n;
    vector<vector<string>>ans;
    vector<string>board(n);
    string s(n,'.');
    for(int i=0;i<n;i++)
    {
        board[i]=s;
    }
    Queens(n,0,board,ans);
    cout<<ans.size()<<"\n";
    sort(ans.begin(),ans.end());
    for(auto it:ans)
    {
        for(auto it1:it)
          {
            for(auto it2:it1)
            cout<<it2<<" ";
            cout<<"\n";
          }
    cout<<"\n";

    }
}