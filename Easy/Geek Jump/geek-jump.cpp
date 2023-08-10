//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// SPACE OPTIMISED  -- TABULATION METHOD -->


class Solution {
  public:
    
  
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        int prev = 0;
        int prev2 = 0;
        int curr = 0;
        for(int i = 1 ; i < n ; i++){
            int fs = prev + abs(height[i] - height[i-1]);
            int ls = INT_MAX;
            if(i > 1) ls = prev2 + abs(height[i] - height[i-2]);
            curr = min(ls, fs);
            prev2 = prev;
            prev = curr;

        }
        return curr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends