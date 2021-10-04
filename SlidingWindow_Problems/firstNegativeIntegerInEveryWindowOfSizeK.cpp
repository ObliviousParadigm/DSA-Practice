#include <bits/stdc++.h>

using namespace std;

vector<long long> printFirstNegativeInteger(long long int a[],
                                            long long int n, long long int k)
{
    vector<long long> res;
    queue<long long> q;

    int start = 0;
    int end = 0;

    while (end < n)
    {
        if (a[end] < 0)
        {
            q.push(a[end]);
        }

        if ((end - start + 1) < k)
        {
            ++end;
        }
        else
        {
            if (q.empty())
            {
                res.push_back(0);
            }
            else
            {
                res.push_back(q.front());
            }

            if (a[start] < 0)
            {
                q.pop();
            }
            ++start;
            ++end;
        }
    }

    return res;
}