#include <iostream>

using namespace std;

int nok(int a1, int b1) {
    int a = a1, b = b1;
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    return a1 * b1 / a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << nok(a, b);
}