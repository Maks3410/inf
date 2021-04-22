#include <iostream>

using namespace std;

void sum(int n) {
    int s;
    s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    cout << s;
}

int main() {
    int n;
    cin >> n;
    sum(n);
}