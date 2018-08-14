// https://www.spoj.com/problems/HS12HDPW/
// HS12HDPW - Hidden Password
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> keys;
        while(n--) {
            string ascii;
            cin >> ascii;
            int bitA(1);    // 00000001
            int bitB(8);    // 00001000
            int a(0), b(0), i(0);
            for (char c: ascii) {
                a += (c & bitA);
                bitA <<= 1;
                if (bitA > 32) bitA = 1;
                b += int((c & bitB) && bitB) * pow(2, i++);
                bitB <<= 1;
                if (bitB > 32) bitB = 1;
            }
            keys.push_back(a);
            keys.push_back(b);
        }
        string code;
        cin >> code;
        for(int i: keys)
            cout << code[i];
        cout << "\n";
    }

    return 0;
}

/*
Example

Input:
2
2
qwe345 rf3Arg
XSBSRasdew9873465hkldsfsalndfvnfq489uqovkLKJHaeDaae555Sk5asdpASD

3
2S4J5K 111111 lrtb2A
isimgsow45ipfgisd56wfgngdfcdkgc7kKKKkuuJJgfstdygQdWORQADFSLKF2K8

Output:
keep
coding

Explanation
Let us have a look at the first 6-tuple: qwe345

char. ASCII code
  q   113 = 01110001B      
  w   119 = 01110111B
  e   101 = 01100101B
  3    51 = 00110011B
  4    52 = 00110100B
  5    53 = 00110101B

a(blue bits)  = 110111B = 55
b(green bits) = 101110B = 46

*/