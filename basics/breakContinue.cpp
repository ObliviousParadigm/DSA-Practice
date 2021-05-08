#include <iostream>

using namespace std;

void findElement(int arr[], int n, int key)
{
    int i = 0;
    while(n--)
    {
        if(arr[i] == key)
        {
            cout<<"Element found at position: "<<i<<endl;
            break;
        }
        ++i;
    }
}

int main()
{
    int arr[6], n = 6, key;

    cout<<"Enter 6 numbers"<<endl;
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }

    cout<<"Key? ";
    cin>>key;

    findElement(arr, n, key);

    cout<<"Print all elements from 0 to 10, other than 3"<<endl;
    for(int i = 0; i<=10; ++i)
    {
        if(i == 3)
            continue;
        else
            cout<<i<<endl;
    }
}
