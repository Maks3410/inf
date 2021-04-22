#include <iostream>

using namespace std;

int main() {
    int i, n, min = 9, max = 0;
    cin >> n;
    while (n) {
        if (n % 10 > max) max = n % 10;
        else if (n % 10 < min) min = n % 10;
        n /= 10;
    }
    cout << max << ' ' << min;
}