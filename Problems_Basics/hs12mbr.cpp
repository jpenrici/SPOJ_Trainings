// https://www.spoj.com/problems/HS12MBR/
// HS12MBR - Minimum Bounding Rectangle
#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;           // number of test cases
    while(t--) {
        cin >> n;       // number of objects
        char obj;
        int x1, y1, x2, y2, r;
        int xmin(1000),  ymin(1000);
        int xmax(-1000), ymax(-1000);

        while (n--) {
            cin >> obj;
            switch (obj) {
                case 'p':   // point
                    cin >> x1 >> y1;
                    if (x1 <= xmin) xmin = x1;
                    if (x1 >= xmax) xmax = x1;
                    if (y1 <= ymin) ymin = y1;
                    if (y1 >= ymax) ymax = y1;
                    break;
                case 'c':   // circle
                    cin >> x1 >> y1 >> r;
                    if (x1 - r <= xmin) xmin = x1 - r;
                    if (x1 + r >= xmax) xmax = x1 + r;
                    if (y1 - r <= ymin) ymin = y1 - r;
                    if (y1 + r >= ymax) ymax = y1 + r;
                    break;
                case 'l':   // line
                    cin >> x1 >> y1 >> x2 >> y2;
                    if (x1 > x2) swap(x1, x2);
                    if (y1 > y2) swap(y1, y2);
                    if (x1 <= xmin) xmin = x1;
                    if (x2 >= xmax) xmax = x2;
                    if (y1 <= ymin) ymin = y1;
                    if (y2 >= ymax) ymax = y2;
                    break;          
            }
        }
        cout << xmin << char(32) << ymin << char(32);
        cout << xmax << char(32) << ymax << endl;
    }   

    return 0;
}

/*
Example
Input:
3
1
p 3 3 

2
c 10 10 20
c 20 20 10

1
l 0 0 100 20

Output:
3 3 3 3 
-10 -10 30 30
0 0 100 20
*/