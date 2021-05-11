#include <iostream>

using namespace std;

class rand
{
public:
    string name;
    int id;

    void printName();

    void printid()
    {
        cout << "Id: " << id;
    }
};

void rand::printName()
{
    cout << "Name: " << name;
}

int main()
{
    class rand obj;

    obj.name = "Adarsh";
    obj.id = 3;

    obj.printName();
    cout << endl;

    obj.printid();
    return 0;
}