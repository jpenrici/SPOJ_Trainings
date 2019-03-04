// https://www.spoj.com/problems/CPTTRN6/
// CPTTRN6 - Character Patterns (Act 6)
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t(0), l(0), c(0), h(0), w(0);
    vector<std::string> v_out {};

    cin >> t;
    while(t > 0) {
        cin >> l >> c >> h >> w;
        string minus_line = string((c+1)*w+c, char(45));
        string dots_line = string((c+1)*w+c, char(46));

        char center;
        string current_line;
        for (int i = 1; i < (h+1)*(l+1); ++i) {
            if (i % (h+1) == 0) {
                center = 43;
                current_line = minus_line;
            } else {
                center = 124;
                current_line = dots_line;                    
            }
            for (int j = 1; j < (c+1)*w+c; ++j) {
                if (j % (w+1) == 0) current_line[j-1] = char(center);
            }
            v_out.push_back(current_line);
        }
        v_out.push_back("");
        std::cin.clear();
        t--;
    }

    for (std::string output: v_out)
        std::cout << output << '\n';

    return 0;
}


/* Example

Input:
3
3 1 2 1
4 4 1 2
2 5 3 2

Output:
.|.
.|.
-+-
.|.
.|.
-+-
.|.
.|.
-+-
.|.
.|.

..|..|..|..|..
--+--+--+--+--
..|..|..|..|..
--+--+--+--+--
..|..|..|..|..
--+--+--+--+--
..|..|..|..|..
--+--+--+--+--
..|..|..|..|..


..|..|..|..|..|..
..|..|..|..|..|..
..|..|..|..|..|..
--+--+--+--+--+--
..|..|..|..|..|..
..|..|..|..|..|..
..|..|..|..|..|..
--+--+--+--+--+--
..|..|..|..|..|..
..|..|..|..|..|..
..|..|..|..|..|..

*/
