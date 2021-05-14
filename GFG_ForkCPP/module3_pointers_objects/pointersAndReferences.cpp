#include <bits/stdc++.h>

using namespace std;

struct demo
{
    int a;
};

int main()
{
    int x = 5;
    int y = 6;
    demo d;

    int *p;
    p = &x;
    p = &y; // 1. Pointer reinitialization is allowed

    int &r = x;
    // &r = y;  // 1. Compile error.
    r = y; // 1. x value is now 6

    p = NULL;
    // &r = NULL    2. Compile error

    p++; // 3. Points to next memory location
    r++; // 3. x value becomes 7

    p = &x;

    cout << &p << " " << &x << endl; // 4. Different addresses. p will give same address as &x
    cout << &r << " " << &x << endl; // 4. Same address

    demo *q = &d;
    demo &qq = d;

    q->a = 8;
    // q.a = 8;    // 5. Compile error
    qq.a = 8;
    // qq->a = 8;  // 5. Compile error

    cout << p << endl; // 6. Prints the address of x
    cout << r << endl; // 6. Print the value of x

    return 0;
}