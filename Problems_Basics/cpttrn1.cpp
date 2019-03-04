// https://www.spoj.com/problems/CPTTRN1/
// CPTTRN1 - Character Patterns (Act 1)
#include <iostream>
#include <vector>

int main()
{
    int t(0), l(0), c(0);
    std::string s("");
    std::vector<std::string> v_out {};

    std::cin >> t;
    while(t >= 1 && t < 100) {
        std::cin >> l >> c;
        if (l >= 100 || c >= 100) break;
        for (int i = 0; i < l; ++i)
        {
            s = "";
            for (int j = 0; j < c; ++j)
            {
                if ((i + j) % 2 == 0) s.push_back('*');
                else s.push_back('.');
            }
            v_out.push_back(s);
        }
        v_out.push_back("");
        std::cin.clear();
        t--;
    }

    for (std::string output: v_out)
        std::cout << output << '\n';

    return 0;
}