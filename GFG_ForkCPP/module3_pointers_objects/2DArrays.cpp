#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33}};
    int i, j;

    for (i = 0; i < 3; ++i)
    {
        cout << "Address of array" << i << " = " << arr[i] << *(arr + i) << endl;

        for (j = 0; j < 4; ++j)
        {
            cout << arr[i][j] << " " << *(*(arr + i) + j) << " ";
        }
        cout << endl;
    }
    return 0;
}