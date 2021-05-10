#include <iostream>

using namespace std;

void print(int* arr, int m, int n)
{
    int i, j;
    cout<<"Row wise"<<endl;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cout<<*((arr+i*n)+j)<<endl;
    cout<<"Column wise"<<endl;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cout<<*((arr+j*m)+i)<<endl;
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = 3, n = 3;
    print(&arr[0][0], m, n); // or int* arr
    return 0;
}
