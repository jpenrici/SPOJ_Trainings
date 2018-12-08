// https://www.spoj.com/problems/SMPSEQ7/
// SMPSEQ7 - Fun with Sequences (Act 5)
#include <iostream>

int main()
{
    bool is_possible = true;
    int n(0), value(0), last_value(0);

    std::cin >> n;
    if (n < 2 || n > 100) {
        is_possible = false;
        n = -1; // não testar
    }

    // primeira fase : decrescente
    if (n > 0) {
    	std::cin >> last_value;
    	n = n - 1;
    }

    while (n > 0) {
    	std::cin >> value;
    	n = n - 1;
    	if (value < last_value) {
            last_value = value;
    	} else {
            last_value = value;
            break;  // = ou >
        }
    }

    // segunda fase : crescente
    while (n > 0) {
        std::cin >> value;
        n = n - 1;
        if (value > last_value) {
            last_value = value;
        } else {      
            is_possible = false; // = ou >
        }
    }    

    if (is_possible)
    	std::cout << "Yes";
    else
    	std::cout << "No";

    return 0;
}

/*
Example 1

Input:
5 
-1 2 -1 1 -1 

Output:
No

Example 2

Input:
6 
3 1 -2 -2 -1 3 

Output:
Yes

Example 3

Input:
6 
2 2 1 0 1 2
 
Output:
No
*/