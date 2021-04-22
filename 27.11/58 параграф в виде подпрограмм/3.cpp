#include <iostream>
using namespace std;

void row(int n) {
    for (int i = 2; i <= 2 * n; i += 2) cout << i << ' ';
}

int main() {
    int n;
    cin >> n;
    row(n);
}