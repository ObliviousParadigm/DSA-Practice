#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        int sum = arr[0];
        int start = 0;
        int end = 0;
        while((start<n) && (end<n))
            {
                if (sum == s)
                    return {start+1, end+1};

                else if (sum > s)
                    {
                        sum -= arr[start];
                        // cout<<sum<<endl;
                        ++start;
                    }

                else if (sum < s)
                    {
                        ++end;
                        sum += arr[end];
                        // cout<<sum<<endl;
                    }
            }
            return {-1};
    }
};