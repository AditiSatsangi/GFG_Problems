//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int>s,k;
        for(int i=0;i<n;i++){
            if(arr[i]<0 ){
                s.push_back(arr[i]);
                
            }
            else{
               k.push_back(arr[i]);
            }
            
        }
    int i=0;
       // int m= k.size();
        for(int m: k){
            arr[i++]= m;
            
        }
        for(int m: s){
           arr[i++]= m;
        }
        
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends