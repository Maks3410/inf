#include <iostream>

using namespace std;

int main() {
    int i, n, n1, rn=0;
    cin >> n;
    n1 = n;
    while (n1) {
        rn = rn * 10 + n1 % 10;
        n1 /= 10;
    }
    if (rn == n) cout << '+'
    else cout << '-';
}