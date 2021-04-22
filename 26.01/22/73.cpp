#include <iostream>
using namespace std;

int main()
{
    int x, L, M;
    for (x=101; x < 100000; x++) {
        L = x - 30;
        M = x + 30;
        while (L != M) {
            if (L > M)
                L = L - M;
            else
                M = M - L;
        }
        if (M == 15) {cout << x; break;}
    }
    return 0;
}

