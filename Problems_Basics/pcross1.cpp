// https://www.spoj.com/problems/PCROSS1/
// PCROSS1 - Cross Pattern (Act 1)
#include <iostream>

int main()
{
    int t(0), m(0), n(0), ci(0), cj(0);
    
    std::cin >> t;
    while(t >= 1 && t <= 100) {

        std::cin >> m >> n >> ci >> cj;
        if (m < 1 || m > 100) break;
        if (n < 1 || n > 100) break;
        if (ci < 1 || ci > m) break;
        if (cj < 1 || cj > n) break;

        std::string line = std::string(n, char(46));
        std::string center = std::string(n, char(42));
        line[cj - 1] = char(42);

        for (int i = 1; i <= m; ++i) {
            if (i == ci)
                std::cout << center << '\n';
            else
                std::cout << line << '\n';
        }
        t--;
    }

    return 0;
}

/*
Input:

3
1 1 1 1
5 5 3 3
8 13 3 5

Output:

*

..*..
..*..
*****
..*..
..*..

....*........
....*........
*************
....*........
....*........
....*........
....*........
....*........
*/