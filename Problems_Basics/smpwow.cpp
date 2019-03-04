// https://www.spoj.com/problems/SMPWOW/
// SMPWOW - Wow
#include <iostream>

int main()
{
    int x(0);
    std::string out("W");

    std::cin >> x;
    for (int i = 0; i < x; i++)
        out.push_back('o');
    out.push_back('w');

    std::cout << out;
    std::cin.clear();

    return 0;
}

/*
Example 1
Input:
1

Output:
Wow

Example 2
Input:
7

Output:
Wooooooow
*/