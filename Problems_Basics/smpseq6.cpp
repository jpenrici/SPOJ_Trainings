// https://www.spoj.com/problems/SMPSEQ6/
// SMPSEQ6 - Fun with Sequences (Act 4)
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> s, q;
    int n(0), m(0), x(0), value(0);

    std::cin >> n;
    std::cin >> x;
    m = n;
    while (n--) {
        std::cin >> value;
        s.push_back(value);
    }

    while (m--) {
        std::cin >> value;
        q.push_back(value);
    }

    for(int i = 0; i < s.size(); i++) {
        for (int y = -x; y <= x; ++y) {
            if ((i + y) > 0 && s[i] == q[i + y])
                std::cout << i + 1 << char(32);
        }
    }

    return 0;
}

/*
Example 1
Input:
5 2
-1 2 -1 1 -1 
3 -2 -1 1 2 

Output:
1 3 4 5 
Example 2
Input:
6 4
-1 2 2 2 2 -2 
3 -2 3 3 3 -1 

Output:
6
Example 3
Input:
6 0
-1 2 10 12 6 -2 
2 -2 10 21 6 -1
 
Output:
3 5
*/