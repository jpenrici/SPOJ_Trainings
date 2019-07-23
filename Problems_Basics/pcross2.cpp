// https://www.spoj.com/problems/PCROSS2/ 
// PCROSS2 - Cross Pattern (Act 2)
#include <iostream>
using std::cin;
using std::cout;

int main() {

    int t(0), m(0), n(0), ci(0), cj(0);

    cin >> t;
    while(t >= 1 && t <= 100) {
		cin >> m >> n >> ci >> cj;

		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				if ((i + j) == (ci + cj) || (i - j) == (ci - cj)) {
					cout << char(42);
				} else {
					cout << char(46);
				}
			}
			cout << '\n';
		}
		cout << '\n';
		t--;
	}
	return 0;
}

/*
Example

Input:
3
1 1 1 1
5 5 3 3
8 13 3 5

Output:
*

*...*
.*.*.
..*..
.*.*.
*...*

..*...*......
...*.*.......
....*........
...*.*.......
..*...*......
.*.....*.....
*.......*....
.........*...

*/