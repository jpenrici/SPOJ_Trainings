// https://www.spoj.com/problems/STRHH/
// STRHH - Half of the half
#include <iostream>
#include <vector>

int main()
{
    int t;
    std::string s;
    std::vector<std::string> v {};

    std::cin >> t;
    while(t >= 1 && t <= 100) {
        std::cin >> s;
        std::string temp("");
        temp.push_back(s[0]);
        for (int i = 1; i < s.size() / 2; ++i)
        	if (i % 2 == 0)  temp.push_back(s[i]); 
        v.push_back(temp);
        std::cin.clear();
        t--;
    }

    for (std::string output: v)
    	std::cout << output << '\n';

    return 0;
}
