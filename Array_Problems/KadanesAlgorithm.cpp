#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int max_so_far = INT_MIN;
        int max_ending_here = 0;
        int i;
        
        for(i = 0; i<n; ++i)
        {
            max_ending_here += arr[i];
            
            if(max_so_far < max_ending_here)
                max_so_far = max_ending_here;
            
            if(max_ending_here < 0)
                max_ending_here = 0;
        }
        return max_so_far;
        
    }
};