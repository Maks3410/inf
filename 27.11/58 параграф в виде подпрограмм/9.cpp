#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void divaded_by_numbers(int n) {
    int i, a;
    bool f;
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

int main() {
    int n;
    cin >> n;
    divaded_by_numbers(n);
}