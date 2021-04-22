#include <iostream>

using namespace std;

int reversed(int a) {
    int ans = 0;
    while (a) {
        ans = ans * 10 + a % 10;
        a /= 10;
    }
    return ans;
}

int main() {
    int a;
    cin >> a;
    cout << reversed(a);
}