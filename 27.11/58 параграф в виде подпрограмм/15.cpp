#include <iostream>

using namespace std;

void replace(int n) {
    int n1, k;
    n1 = n;
    k = 0;
    while (n1) {
        n1 /= 10;
        k++;
    }
    n = n % int(pow(10, k - 1)) / 10 * 10 + n / int(pow(10, k - 1)) + n % 10 * int(pow(10, k - 1));
    cout << n;
}

int main() {
    int n;
    cin >> n;
    replace(n);
}