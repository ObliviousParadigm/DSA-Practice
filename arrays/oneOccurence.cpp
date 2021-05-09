#include <iostream>

using namespace std;

int findSingle(int *arr, int n)
{
    int result = arr[0];
    for(int i = 1; i<n; ++i)
        result = result^arr[i];
    return result;
}

int main()
{
    int n;
    cout<<"How many elements in the array? ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: "<<endl;
    for(int i = 0; i<n; ++i)
        cin>>arr[i];
    cout<<findSingle(arr, n)<<endl;
    return 0;
}
