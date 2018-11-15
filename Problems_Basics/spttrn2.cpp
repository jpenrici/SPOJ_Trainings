// https://www.spoj.com/problems/SPTTRN2/
// SPTTRN2 - Straight Line Spiral Pattern (Act 2)
#include <iostream>

using std::cin;
using std::cout;
using std::string;

void spiral(int s)
{
    string matrix = string(s * s, char(46));

    int x = 0, y = 0;
    int x0 = 2, y0 = 0;
    int x1 = s - 1, y1 = s - 1;
    int step = 0;

    while(true) {
        while(true) {
            matrix[y * s + x] = '*';

            if (step % 4 == 0) {
                y++;
                if (y == y1) {
                    y1 -= 2;
                    break;
                }
            }

            if (step % 4 == 1) {
                x++;
                if (x == x1) {
                    x1 -= 2;
                    break;
                }
            }

            if (step % 4 == 2) {
                y--;
                if (y == y0){;
                    y0 += 2;
                    break;
                }
            }                 

            if (step % 4 == 3) {
                x--;
                if (x == x0) {
                    x0 += 2;
                    break;
                }
            }
        }
        step++;
        // if (step == s) break;
        if (step == s) break;
    }
    matrix[y * s + x] = '*';

    for(int i = 0; i < matrix.size(); ++i) {
        if (i % s == 0 && i != 0) cout << '\n';
        cout << matrix[i];
    }
}

int main()
{
    int t(0), s(0);

    cin >> t;
    while(t--) {
        cin >> s;
        spiral(s);
        cout << '\n';
    }

    return 0;
}

/*
Example

Input:
5
4
5
11 
13
78

Output:
*.**
*..*
*..*
****

*.***
*.*.*
*.*.*
*...*
*****

*.*********
*.*.......*
*.*.*****.*
*.*.*...*.*
*.*.*.*.*.*
*.*.*.*.*.*
*.*.***.*.*
*.*.....*.*
*.*******.*
*.........*
***********

*.***********
*.*.........*
*.*.*******.*
*.*.*.....*.*
*.*.*.***.*.*
*.*.*.*.*.*.*
*.*.*.*.*.*.*
*.*.*...*.*.*
*.*.*****.*.*
*.*.......*.*
*.*********.*
*...........*
*************

*/