// https://www.spoj.com/problems/SMPCIRC/
// SMPCIRC - Two Circles
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        char ans = 'O';
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        // Circunferências iguais
        if (x1 == x2 && y1 == y2 && r1 == r2) {
            cout << ans << '\n';
            continue;
        }

        // Distância euclediana entre os centros das circunferências
        double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

        // Circunferências internas
        if (d < r1 - r2 || d < r2 - r1) ans = 'I';

        // Tangentes internas
        if (d == r1 - r2 || d == r2 - r1) ans = 'E';

        cout << ans << '\n';
    }

    return 0;
}

/*
Given two circles: O1 with the center o1 = (xo1, yo1) and a radius r1
and O2 with the center o2 = (xo2, yo2) and radius r2,
please compute if O1 is inside O2 or if O2 is inside O1.

Output description
For each test case print one character:
I, if O1 is inside O2 (or if O2 is inside O1), 
E, if O1 is internally tangent to O2 (or if O2 is internally tangent to O1), 
O, in other cases.

Example

Input:
2
103 104 5 100 100 10
103 104 10 100 100 10

Output:
E
O
*/