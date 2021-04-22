#include <iostream>
using namespace std;

int main()
{
    int x, a, b, x1, c;
    for (x=1; x < 100000; x++) {
        x1 = x;
        a = 1;
        b = 10;
        while (x1 > 0) {
            c = x1 % 10;
            a = a * c;
            if (c < b)
                b = c;
            x1 = x1 / 10;
        }

        if ((a == 45) && (b == 5)) {cout << x; break;}
    }
    return 0;
}

