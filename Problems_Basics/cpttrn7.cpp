// https://www.spoj.com/problems/CPTTRN7/
// CPTTRN7 - Character Patterns (Act 7)
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t(0), l(0), c(0), s(0);

    cin >> t;
    while(t--) {
        cin >> l >> c >> s;
        
        vector<string> v_out(2 * s);
        for (int i = 0; i < s; ++i) {
            string str_up(""), str_down("");
            string str_border = string(s - i - 1, char(46));
            string str_center = string(2 * i, char(46));
            for (int j = 0; j < c; ++j) {
                str_up += str_border + char(47) + str_center
                    + char(92) + str_border; 
                str_down += str_border + char(92) + str_center
                    + char(47) + str_border;                          
            }
            v_out[i] = str_up;
            v_out[2 * s - i - 1] = str_down;
        }

        while(l--) {
            for (string s: v_out) 
                cout << s << "\n";
        }

        cin.clear();
    }

    return 0;
}

/* Example

Input:
3
3 1 2 
4 4 1 
2 5 2

Output:
./\.
/..\
\../
.\/.
./\.
/..\
\../
.\/.
./\.
/..\
\../
.\/.

/\/\/\/\
\/\/\/\/
/\/\/\/\
\/\/\/\/
/\/\/\/\
\/\/\/\/
/\/\/\/\
\/\/\/\/


./\../\../\../\../\.
/..\/..\/..\/..\/..\
\../\../\../\../\../
.\/..\/..\/..\/..\/.
./\../\../\../\../\.
/..\/..\/..\/..\/..\
\../\../\../\../\../
.\/..\/..\/..\/..\/.

*/