#include <bits/stdc++.h>

using namespace std;

int main()
{
    int *p = NULL;

    // nothrow is used to return a NULL pointer instead of throwing an exception
    // when there is not enough memory available in the heap
    p = new (nothrow) int;

    if (!p)
    {
        cout << "Allocation of memory has failed" << endl;
    }
    else
    {
        // Store value at the allocated address
        *p = 29;
        cout << "Value of p: " << *p << endl;
    }

    float *r = new float(75.25);
    cout << "Value of r: " << *r << endl;

    int n = 5;
    int *q = new (nothrow) int[n];

    if (!q)
    {
        cout << "Allocation of memory failed" << endl;
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            q[i] = i + 1;
        }

        cout << "Value stored in block of memory: ";
        for (int i = 0; i < n; ++i)
            cout << q[i] << " ";
    }

    cout << endl;

    delete p;
    delete r;
    delete[] q;

    return 0;
}