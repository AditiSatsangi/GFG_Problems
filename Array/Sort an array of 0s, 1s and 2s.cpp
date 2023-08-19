//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
     int c0=0;
    int c1=0;
    int c2=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0){
            c0++;
        }else if(arr[i]==1){
            c1++;
        }else{
            c2++;
        }
    }
    
    // for(int i=0; i<n; i++){
    int i=0;
        while(c0!=0){
            arr[i]=0;
            c0--;
            i++;
        }
        while(c1!=0){
            arr[i]=1;
            c1--;
            i++;
        }
        while(c2!=0){
            arr[i]=2;
            c2--;
            i++;
        }
    
    
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends