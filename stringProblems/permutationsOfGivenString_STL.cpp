#include <bits/stdc++.h>

using namespace std;

class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    vector<string> perms;
		    
            // Sort the array in ascending order
		    sort(S.begin(), S.end());
		    
		    do{
		        perms.push_back(S);
		    }while(next_permutation(S.begin(), S.end()));
		    
		    return perms;
		}
};