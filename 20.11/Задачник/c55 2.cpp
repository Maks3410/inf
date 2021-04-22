#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int i;
    cin >> n;
    double s = 0, k = 0, e=0.00001;
    for (i = 1; i <= n; i++) {
        k = 1 / pow(2, i) + 1 / pow(3, i);
        if (k >= e) s += k;
    }
    cout << s;
}