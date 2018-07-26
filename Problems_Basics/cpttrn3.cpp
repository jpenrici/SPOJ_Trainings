// https://www.spoj.com/problems/CPTTRN3/
// CPTTRN3 - Character Patterns (Act 3)
#include <iostream>
#include <vector>

int main()
{
    int t(0), l(0), c(0);
    std::string s("");
    std::vector<std::string> v_out {};

    std::cin >> t;
    while(t > 0) {
        std::cin >> l >> c;
        for (int i = 0; i <= 3*l; ++i)
        {
            s = "";
            for (int j = 0; j < 3*c + 1; ++j)
            {
                if (i % 3 == 0) {
                    s.push_back('*');
                    continue;
                } 
                if (j % 3 == 0) s.push_back('*');
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

/*
Example
Input:
3
3 1
4 4
2 5

Output:
****
*..*
*..*
****
*..*
*..*
****
*..*
*..*
****

*************
*..*..*..*..*
*..*..*..*..*
*************
*..*..*..*..*
*..*..*..*..*
*************
*..*..*..*..*
*..*..*..*..*
*************
*..*..*..*..*
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