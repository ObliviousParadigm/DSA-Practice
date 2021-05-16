/*
Important differences between the C and C++ structures:
1. Member functions are allowed inside structures
2. Direct Initialization of data members inside the structure
3. Using struct keyword while declaring variables
4. Static members
5. Constructor creation in structure
6. sizeof operator: C will give 0, C++ will give 1
7. Data hiding
8. Access modifiers
*/


#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x, y;
};

int main()
{
    struct Point p1 = {0, 1};
    struct Point arr[2];

    struct Point p3 = {2, 3};
    struct Point *p4 = &p3;

    arr[0].x = 5;
    arr[0].y = 6;

    cout << "p1" << endl;
    cout << p1.x << " " << p1.y << endl;

    cout << "arr[0]" << endl;
    cout << arr[0].x << " " << arr[0].y << endl;

    cout << "p4" << endl;
    cout << p4->x << " " << p4->y << endl;

    return 0;
}