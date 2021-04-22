#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main() {
    int n, i, a;
    bool f;
    cin >> n;
    for (i = 1; i <= n; i++) {
        f = true;
        a = i;
        while (a) {
            if (a % 10 != 0) {
                if (i % (a % 10) != 0) {
                    f = false; break;
                }
            }
            else f = false;
            a = a / 10;
        }
        if (f) cout << i << ' ';
    }
}