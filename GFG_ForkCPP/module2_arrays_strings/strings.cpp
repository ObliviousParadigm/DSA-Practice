#include <bits/stdc++.h>

using namespace std;

string floatPortion(string fnum)
{
    int pos = fnum.find('.');
    if (pos == string::npos)
        return "";
    return fnum.substr(pos+1);
}

bool onlyDigits(string num)
{
    int i, l = num.length();
    for(i = 0; i<l; ++i)
    {
        if(num.at(i) < '0' || num.at(i) > '9')
            return 0;
    }
    return 1;
}

string replaceBlank(string url)
{
    string replace = ".";

    int n = 0;
    while((n = url.find(" ", n)) != string::npos)
    {
        url.replace(n, 1, replace);
        n += replace.length();
    }
    return url;

}

int main()
{
    string fnum = "23.342";
    cout<<fnum<<"\nFloating point part is: "<<floatPortion(fnum)<<endl;

    string num = "3452";
    if (onlyDigits(num))
    {
        cout<<num<<"\nString contains only digits"<<endl;
    }

    string url = "google com";
    cout<<url<<endl;
    cout<<replaceBlank(url)<<endl;
}