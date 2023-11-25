//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	   // sort(arr,arr+n);
	    vector<int>temp;
	    int p = n/2;
	    for(int i = 0 ; i < p ;i++){
	        temp.push_back(arr[i]);
	        temp.push_back(arr[p+i]);
	    }
	    for(int i = 0; i < n ; i++){
	        arr[i]=temp[i];
      	}
	}
	

	
	
	
	
	
	
		 

};


//{ Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends