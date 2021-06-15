#include <bits/stdc++.h>

using namespace std;

int summerHeat(vector<int> nums)
{
    // int xa = nums[0];
    // int xb = nums[1];
    // int Xa = nums[2];
    // int Xb = nums[3];

    return ((nums[2] / nums[0]) + (nums[3] / nums[1]));
}

int main()
{
    int n;
    int val;
    vector<vector<int>> inp;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        vector<int> temp;
        for (int j = 0; j < 4; ++j)
        {
            cin >> val;
            temp.push_back(val);
        }
        inp.push_back(temp);
    }
    for (int i = 0; i < n; ++i)
    {
        int sum = summerHeat(inp[i]);
        cout << sum << endl;
    }
    return 0;
}