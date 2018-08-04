// https://www.spoj.com/problems/CPTTRN5/
// CPTTRN4 - Character Patterns (Act 5)
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t(0), l(0), c(0), s(0);
    vector<std::string> v_out {};

    cin >> t;
    while(t > 0) {
        cin >> l >> c >> s;
        string asterisk_line = string((s+1)*c+1, char(42));
        string base = string(s+1, char(46));
        base[0] = char(42);

        for (int i = 0; i < l; ++i) {
            v_out.push_back(asterisk_line);
            for (int j = 0; j < s; ++j) {
                string line("");
                for (int k = 0; k < c; ++k) {
                    string str(base);
                    if (i % 2 == 0) {
                        if (k % 2 == 0) str[j + 1] = char(92);
                        else str[s - j] = char(47);
                    } 
                    else {
                        if (k % 2 != 0) str[j + 1] = char(92);
                        else str[s - j] = char(47);         
                    }
                    line.append(str);
                }
                line.push_back(char(42));
                v_out.push_back(line);
            }
        }
        v_out.push_back(asterisk_line);
        v_out.push_back("");
        std::cin.clear();
        t--;
    }

    for (std::string output: v_out)
        std::cout << output << '\n';

    return 0;
}


// Example

// Input:
// 3
// 3 1 2 
// 4 4 1 
// 2 5 2 

// Output:
// ****
// *\.*
// *.\*
// ****
// *./*
// .*
// ****
// *\.*
// *.\*
// ****

// *********
// *\*/*\*/*
// *********
// */*\*/*\*
// *********
// *\*/*\*/*
// *********
// */*\*/*\*
// *********

// ****************
// *\.*./*\.*./*\.*
// *.\*/.*.\*/.*.\*
// ****************
// *./*\.*./*\.*./*
// */.*.\*/.*.\*/.*
// ****************
