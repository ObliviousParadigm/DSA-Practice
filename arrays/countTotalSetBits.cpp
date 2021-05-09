#include <bits/stdc++.h>

using namespace std;

unsigned int countSetBits(unsigned int n)
{
    if (n == 0)
        return 0;
    return (n & 1) + countSetBits(n >> 1);
}

unsigned int countSetTotal(unsigned int n)
{
    unsigned int sum;
    while(n>0)
    {
        sum += countSetBits(n);
        --n;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter value for n: ";
    cin>>n;
    cout<<countSetTotal(n)<<endl;
}
