//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int upsize = m - l + 1;
         int downsize = r-m;
         int arrup[upsize];
         int arrdown[downsize];
         int temp = l;
         for(int i = 0 ; i < upsize ; i++){
             arrup[i] = arr[temp++];
         }
         for(int i = 0 ; i < downsize ; i++){
             arrdown[i] = arr[temp++];
         }
         int up = 0, down = 0;
         temp = l;
         
         while(up< upsize && down< downsize){
             if(arrup[up] >= arrdown[down]){
                 arr[temp++] = arrdown[down++];
             }
             else{
                 arr[temp++] = arrup[up++];
             }
         }
         while(up<upsize) arr[temp++] = arrup[up++];
         while(down<downsize) arr[temp++] = arrdown[down++];
         
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        
        if(l >= r) return;
        int m = (l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends