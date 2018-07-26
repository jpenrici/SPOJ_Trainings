// https://www.spoj.com/problems/TESTINT/
// TESTINT - Test 1
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int a(201), b(201);
    while (a >= 200 || b >= 200) {
        cin >> a;
        cin >> b;
    }
    cout << a + b;

    return 0;
}
