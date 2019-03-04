// https://www.spoj.com/problems/SMPSEQ4/
// SMPSEQ4 - Fun with Sequences (Act 2)
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> s, q;
    int n(0), m(0), value(0);

    std::cin >> n;
    while (n--) {
        std::cin >> value;
        s.push_back(value);
    }

    std::cin >> m;
    while (m--) {
        std::cin >> value;
        q.push_back(value);
    }

    std::vector<int> intersection(s.size() + q.size(), 999);
    std::vector<int>::iterator it;
    it = std::set_intersection(s.begin(), s.end(), q.begin(), q.end(), intersection.begin());

    for(int num: intersection) {
        if (num < 999) { 
            std::cout << num << char(32);
        }
    }

    return 0;
}