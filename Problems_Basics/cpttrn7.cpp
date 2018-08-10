// https://www.spoj.com/problems/CPTTRN7/
// CPTTRN7 - Character Patterns (Act 7)
#include <iostream>

using namespace std;

int main()
{
    int t(0), l(0), c(0), s(0);

    cin >> t;
    while(t--) {
        cin >> l >> c >> s;

        while(l--) {
            int center = 0;
            for (int i = 0; i < s; ++i) {
                string str_border = string(s - i - 1, char(46));
                string str_center = string(center, char(46));
                center = center + 2;
                for (int j = 0; j < c; ++j) {
                    cout << str_border << char(47) << str_center
                         << char(92) << str_border;
                }
                cout << endl;
            }
            center = center - 2;
            for (int i = 0; i < s; ++i) {
                string str_border = string(i, char(46));
                string str_center = string(center, char(46));
                center = center - 2;
                for (int j = 0; j < c; ++j) {
                    cout << str_border << char(92) << str_center
                         << char(47) << str_border;
                }
                cout << endl;
            }
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