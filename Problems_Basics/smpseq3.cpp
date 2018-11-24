// https://www.spoj.com/problems/SMPSEQ3/
// SMPSEQ3 - Fun with Sequences
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> s;
    int n(0), m(0), value(0);

    std::cin >> n;
    while (n--) {
        std::cin >> value;
        s.push_back(value);
    }

    std::cin >> m;
    while (m--) {
        std::cin >> value;
        std::replace(s.begin(), s.end(), value, 999);
    }

    for(int num: s) {
        if (num < 999) { 
            std::cout << num << char(32);
        }
    }

    return 0;
}