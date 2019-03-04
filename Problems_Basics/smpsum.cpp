// https://www.spoj.com/problems/SMPSUM/
// SMPSUM - Iterated sums
#include <iostream>

using std::cin;
using std::cout;

int smpsum(int a, int b)
{
    if (a < 1)   return 0;
    if (a > b)   return 0;
    if (b > 100) return 0;
    if (a == b)  return a * b;

    int s(0);

    while(a <= b) {
        s += a * a;
        a++;
        if (a > b) break;
        s += b * b;
        b--;
    }

    return s;
}

int main()
{
    int a(0), b(0);

    cin >> a >> b;
    cout << smpsum(a, b);
    cin.clear();

    return 0;
}

/*
Example
Input:
1 4

Output:
30
Example 2
Input:
5 6

Output:
61
*/