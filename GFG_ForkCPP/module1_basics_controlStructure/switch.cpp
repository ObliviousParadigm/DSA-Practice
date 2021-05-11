#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number between 1-3"<<endl;

    cin>>n;

    switch(n)
    {
        case 1: cout<<"You chose 1"<<endl;
                break;
        case 2: cout<<"You chose 2"<<endl;
                break;
        case 3: cout<<"You chose 3"<<endl;
                break;
        default: cout<<"You chose a number that is out of range"<<endl;
    }
}
