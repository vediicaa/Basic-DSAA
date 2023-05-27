// generate a baords where each column and row have a queen but no one should be attacking each other
//Method 2: O(n!*n)
//Using Hashing 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// wouldn't require this while hashing
/*bool isSafe(vector<string>&board,int row,int col,int n)
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
}*/

void Queens(int n,int col,vector<string>&board,vector<vector<string>>&ans,vector<int>&horizontal,vector<int>&diaupwards,vector<int>&diadownwards)
{   
    //base case
   if(col==n)
   {
    ans.push_back(board);
    return;
   }
   for(ll row=0;row<n;row++)
   {
    if(horizontal[row]==0 && diadownwards[row+col]==0 && diaupwards[n-1+col-row]==0)
    {
        horizontal[row]=1;
        diadownwards[row+col]=1;
        diaupwards[n-1+col-row]=1;
        board[row][col]='Q';
        Queens(n,col+1,board,ans,horizontal,diaupwards,diadownwards);
        horizontal[row]=0;
        diadownwards[row+col]=0;
        diaupwards[n-1+col-row]=0;
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
    //generating hash arrays
    vector<int>horizontal(n,0);
    vector<int>diaupwards(2*n-1,0);
    vector<int>diadownwards(2*n-1,0);
    Queens(n,0,board,ans,horizontal,diaupwards,diadownwards);
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