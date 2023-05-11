//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
        int d=0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] != 0){
                d++;
                break;
            }
        }
        if(d == 0) return 0;
        
        int ans=0;
        for(int i = 0;  i < n ; i++){
            if(i > 0){
                if(arr[i] == 0 && arr[i-1] != 0) ans++;
            }
        }
        if(arr[n-1] != 0) ans++;
        if(ans == 0) return -1;
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends