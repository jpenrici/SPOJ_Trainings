// https://www.spoj.com/problems/CPTTRN2/
// CPTTRN2 - Character Patterns (Act 2)
#include <iostream>
#include <vector>

int main()
{
    int t(0), l(0), c(0);
    std::string s("");
    std::vector<std::string> v_out {};

    std::cin >> t;
    while(t >= 1) {
        std::cin >> l >> c;
        for (int i = 0; i < l; ++i)
        {
            s = "";
            for (int j = 0; j < c; ++j)
            {
                if (i == 0 || i == l - 1) {
                    s.push_back('*');
                    continue;
                }

                if (j == 0 || j == c - 1) s.push_back('*');
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