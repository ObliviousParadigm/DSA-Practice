#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int curr_max = arr[0];
        int max_so_far = arr[0];
        int i;
        
        for(i = 1; i<n; ++i)
        {
            curr_max = max(arr[i], curr_max+arr[i]);
            max_so_far = max(max_so_far, curr_max);
        }
        return max_so_far;
        
    }
};