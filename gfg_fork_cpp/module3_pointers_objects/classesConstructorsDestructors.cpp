#include <bits/stdc++.h>

using namespace std;

class rand
{
    public:
    int id;

    rand()
    {
        cout<<"Default constructor"<<endl;
        id = -1;
    }

    rand(int x)
    {
        cout<<"Parameterized constructor"<<endl;
        id = x;
    }

    ~rand()
    {
        cout<<"Destructor for id: "<<id<<endl;
    }
};

int main()
{
    class rand obj;
    cout<<"Id for obj: "<<obj.id<<endl;

    class rand obj2(3);
    cout<<"Id for obj2(3): "<<obj2.id<<endl;

    return 0;
}