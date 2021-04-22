#include <iostream>

using namespace std;

int main() {
    int i, n, n1, min = 9, ans=0;
    cin >> n;
    while (n) {
        n1 = n;
        min = 9;
        while (n1) {
            if (n1 % 10 < min) min = n1 % 10;
            n1 /= 10;
        }
        ans = ans * 10 + min;
        n /= 10;
    }
    cout << ans;
}