#include <iostream>

using namespace std;
int main() {
    int n, k, i, a;
    cin >> n;
    for (i = 1; i <= n; i++) {
        a = i;
        k = 0;
        while (a) {
            k++;
            a = a / 10;
        }
        if ((i * i) % int(pow(10, k)) == i) cout << i << ' ';
    }
}