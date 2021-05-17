#include <bits/stdc++.h>

using namespace std;

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here

        // Get the total sum with a formula
        int total = (n*(n+1))/2;
        
        int sum = 0;
        
        // Get sum of the array
        for(auto i = array.begin(); i!=array.end(); ++i)
        {
            sum += *i;
        }
        
        return total - sum;
    }
};