// https://www.spoj.com/problems/EXPECT/
// EXPECT - Life, the Universe, and Everything (Interactive)
#include <iostream>

int main()
{
    int i = 0;
    while(i != 42) {
        std::cin >> i;
        std::cout << i << '\n';
        std::cin.clear();
    }
    return 0;
}