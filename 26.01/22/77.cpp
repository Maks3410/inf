#include <iostream>
using namespace std;

int main()
{
    int x, L, M;
    for (x=101; x < 100000; x++) {
        L = x - 12;
        M = x + 12;
        while (L != M)  {
            if (L > M)
                L = L - M;
            else
                M = M - L;
        }
        if (M == 2) {cout << x; break;}
    }
    return 0;
}

