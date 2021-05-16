#include <bits/stdc++.h>

using namespace std;

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int total = (n*(n+1))/2;
        
        int sum = 0;
        
        for(auto i = array.begin(); i!=array.end(); ++i)
        {
            sum += *i;
        }
        
        return total - sum;
    }
};