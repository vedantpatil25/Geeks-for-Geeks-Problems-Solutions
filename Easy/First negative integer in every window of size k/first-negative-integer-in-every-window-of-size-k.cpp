//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k) {
    int neg =0;
    vector<long long> ans;
    queue<long long>q ;
    long long i = 0;
    long long j = 0;
    
    while(j < n)
    {
        if(arr[j] < 0) q.push(arr[j]);
        if((j-i+1) < k)
        {
            j++;
        }
        else if((j-i+1) == k)
        {
            if(q.empty()) ans.push_back(0);
            else
            {
                int temp2 = q.front();
                ans.push_back(temp2);
                
                if(arr[i] == temp2) 
                {
                    q.pop();
                }
            }
            i++;
            j++;
        }
        
    }
    return ans;
 }