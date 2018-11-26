// https://www.spoj.com/problems/SMPSEQ5/
// SMPSEQ5 - Fun with Sequences (Act 3)
#include <iostream>
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

    int min = s.size() < q.size() ? s.size() : q.size();
    for(int i = 0; i < min; i++) {
        if (s[i] == q[i])
            std::cout << i + 1 << char(32);
    }

    return 0;
}