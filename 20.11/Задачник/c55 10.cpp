#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int i, n, f = 1;
    cin >> n;
    double s = 0, k = 0, e = 0.00001;
    for (i = 1; i <= n; i++) {
        f *= i;
        k = f / 3 * pow(i, i);
        if (k >= e) s += k;
    }
    cout << s;
}