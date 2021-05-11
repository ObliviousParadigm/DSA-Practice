#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    getline(cin, str);

    cout<<"Entered string: "<<str<<endl;

    str.push_back('a');
    cout<<"Push back(Push char at end): "<<str<<endl;

    str.pop_back();
    cout<<"Pop back(Delete char from end): "<<str<<endl;

    cout<<"String capacity: "<<str.capacity()<<endl;
    
    str.resize(10);
    cout<<"Resized to 10 chars: "<<str<<endl;

    str.shrink_to_fit();
    cout<<"Shrunk to fit, current capacity: "<<str.capacity()<<endl;
    cout<<"String: "<<str<<endl;
    
    string str1 = "Hello world";
    string str2 = "I am Adarsh";

    // Declaraing char array and copying elements into it
    char ch[20];
    str1.copy(ch, 5, 0);
    cout<<"Char array contents: "<<ch<<endl;

    cout<<"\nBefore swapping\n"<<str1<<"\n"<<str2<<endl;
    str1.swap(str2);
    cout<<"\nAfter swapping\n"<<str1<<"\n"<<str2<<endl;

    return 0;
}