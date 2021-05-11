#include <bits/stdc++.h>

using namespace std;

class dispName
{
    // Access specifier
    public:

    // Data Members
    string str;

    // Member Functions()
    void printStr()
    {
        cout<<"String: "<<str;
    }
};

int main()
{
    class dispName obj;

    obj.str = "Adarsh";

    obj.printStr();
    return 0;
}
