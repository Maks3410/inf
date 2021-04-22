#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int i, x;
    double s = 1, k = 0;
    cin >> x;
    for (i = 2; i <= n; i++) {
        s *= 1 - 1. / pow(2, i);
    }
    cout << s;
}