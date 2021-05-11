#include <bits/stdc++.h>

using namespace std;

void printSubarray(int *arr, int n)
{
    int i, j, k;
    for(i = 0; i<n; ++i)
        for(j = i; j<n; ++j)
        {
            for(k = i; k<=j; ++k)
                cout<<arr[k]<<" ";
            cout<<endl;
        }
}

int sumOfSubarray(int *arr, int n)
{
    int i, j, k, sum = 0;
    for(i = 0; i<n; ++i)
    {
        for(j = i; j<n; ++j)
        {
            for(k = i; k<=j; ++k)
            {
                sum += arr[k];
            }
        }
    }

    return sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    printSubarray(arr, n);
    cout<<sumOfSubarray(arr, n)<<endl;
}
