#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string ch;
    int line = 5;
    while(line--)
    {
        getline(cin, ch);

        while (ch.length() == 0)
            getline(cin, ch);
        cout<<ch<<" : newline"<<endl;
    }
    return 0;
}
