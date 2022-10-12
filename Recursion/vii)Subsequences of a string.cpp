//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++

	int subsequence(string str,string output[])
	{
		if(str.empty())
		{return 1;
		output[0]="";
	    }
		string smallstring=str.substr(1);
		int c=subsequence(smallstring,output);
		for(int i=0;i<c;i++)
		output[i+c]=str[0]+ output[i];
return 2*c;
	}

//{ Driver Code Starts.

int main() {
   string str;
   cin>>str;
   int size;
   cin>>size;
   string output[1000];
   int count=subsequence(str,output);
   for(int i=0;i<count;i++)
   {
	cout<<output[i]<<"\n";
   }
}

// } Driver Code Ends