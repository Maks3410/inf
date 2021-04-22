#include <iostream>

using namespace std;

void automorths(int n) {
    int i, k, a;
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

int main() {
    int n;
    cin >> n;
    automorths(n);
}