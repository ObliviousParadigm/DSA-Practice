#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5;
    int arr[n];

    cout<<"Enter values for array of length 5"<<endl;
    for(int i = 0; i<n; ++i)
    {
        cin>>arr[i]; // Can use i[arr] as well
    }

    cout<<"All the values in the array are: "<<endl;
    
    for(int i = 0; i<n; ++i)
    {
        cout<<arr[i]<<endl;
        // OR
        cout<<i[arr]<<endl;
    }
    return 0;
}
