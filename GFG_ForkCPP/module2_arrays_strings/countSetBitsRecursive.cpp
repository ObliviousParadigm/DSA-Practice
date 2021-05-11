#include <bits/stdc++.h>

using namespace std;

unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    if (n == 0)
        return 0;

    else
        return (n & 1) + countSetBits(n >> 1);
}

int main()
{
    int n;
    cin>>n;
    cout<<countSetBits(n)<<endl;
    return 0;
}
