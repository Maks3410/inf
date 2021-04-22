#include <iostream>

using namespace std;

void same_nums(int n) {
    int a, n1;
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

int main() {
    int n;
    cin >> n;
    same_nums(n);
}