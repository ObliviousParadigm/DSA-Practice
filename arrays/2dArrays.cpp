#include <iostream>

using namespace std;

// n must be passed before the 2D array
void print(int m, int n, int arr[][3])
{
    int i, j;
    for(i = 0; i<n; i++)
        for(j = 0; j<m; j++)
            cout<<arr[i][j]<<endl;
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = 3, n = 3;
    print(m, n, arr);
    return 0;
}
