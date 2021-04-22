#include <iostream>
using namespace std;

int main()
{
    int x, a, b, x1;
    for (x=1; x < 100000; x++) {
        x1 = x;
        a = 0;
        b = 0;
        while (x1 > 0) {
            a = a + 1;
            if (x1 % 2 == 0)
                b = b + x1 % 10;
            x1 = x1 / 10;
        }
        if ((a == 3) && (b == 18)) {cout << x; break;}
    }
    return 0;
}

