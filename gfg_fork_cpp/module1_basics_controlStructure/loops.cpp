#include <iostream>

using namespace std;

int main()
{
    int i;
    for(i=0; i<5; ++i)
        cout<<"For loop"<<i<<"\n";

    i = 0;
    int j;
    j = 1;
    while(j<6)
    {
        cout<<j;
        cout<<"While loop"<<j<<"\n";
        j++;
    }
    do
    {
        cout<<"Do-while loop"<<i<<"\n";
        ++i;
    }while(i<5);

    return 0;
}
