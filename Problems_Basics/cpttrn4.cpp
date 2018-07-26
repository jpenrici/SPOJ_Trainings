// https://www.spoj.com/problems/CPTTRN4/
// CPTTRN4 - Character Patterns (Act 4)
#include <iostream>
#include <vector>

int main()
{
    int t(0), l(0), c(0), h(0), w(0);
    std::vector<std::string> v_out {};

    std::cin >> t;
    while(t > 0) {
        std::cin >> l >> c >> h >> w;
        std::string str_asterisk(""), str_mix("");
        str_asterisk = std::string((w+1)*c+1, '*');

        for (int k = 0; k < c; ++k)
            str_mix += "*" + std::string(w, '.');
        str_mix += "*";

        v_out.push_back(str_asterisk);
        for (int i = 0; i < l; ++i)
        {         
            for (int j = 0; j < h; ++j)
            {
                v_out.push_back(str_mix);
            }
            v_out.push_back(str_asterisk);
        }
        v_out.push_back("");
        std::cin.clear();
        t--;
    }

    for (std::string output: v_out)
        std::cout << output << '\n';

    return 0;
}

/*
Example

Input:
3
3 1 2 1
4 4 1 2
2 5 2 2

Output:
***
*.*
*.*
***
*.*
*.*
***
*.*
*.*
***

*************
*..*..*..*..*
*************
*..*..*..*..*
*************
*..*..*..*..*
*************
*..*..*..*..*
*************

****************
*..*..*..*..*..*
*..*..*..*..*..*
****************
*..*..*..*..*..*
*..*..*..*..*..*
****************

*/