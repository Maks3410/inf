#include <iostream>

using namespace std;
int main() {
    int n, a, n1;
    cin >> n;
    bool f = false;
    while (n) {
        n1 = n / 10;
        a = n % 10;
        while (n1) {
            if (a == n1 % 10) f = true;
            n1 /= 10;
        }
        n /= 10;
    }
    if (f) cout << "True\n";
    else cout << "False";
}