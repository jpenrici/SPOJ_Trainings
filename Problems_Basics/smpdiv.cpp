// https://www.spoj.com/problems/SMPDIV/
// SMPDIV - Divisibility
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n, x, y;
        cin >> n >> x >> y;
        bool flag = false;
        for (int i = 2; i < n; ++i) {
            if (i % x == 0 && i % y != 0 ){
                cout << i << char(32);
                flag = true;
            }
        }
        if (flag) cout << '\n';
    }
    return 0;
}

/*
Example

Input:
2 
7 2 4
35 5 12

Output:
2 6 
5 10 15 20 25 30
*/