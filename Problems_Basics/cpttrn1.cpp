// https://www.spoj.com/problems/CPTTRN1/
// CPTTRN1 - Character Patterns (Act 1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t(0), l(0), c(0);
    string s("");
    vector<std::string> v_out {};

    cin >> t;
    while(t >= 1 && t < 100) {
        cin >> l >> c;
        if (l >= 100 || c >= 100)
            break;
        for (int i = 0; i < l; ++i)
        {
            s = "";
            for (int j = 0; j < c; ++j)
            {
                if 
                    ((i + j) % 2 == 0) s.push_back('*');
                else 
                    s.push_back('.');
            }
            v_out.push_back(s);
        }
        v_out.push_back("");
        cin.clear();
        t--;
    }

    for (string output: v_out)
        cout << output << '\n';

    return 0;
}
