#include <iostream>

using namespace std;

int main() {
    int i, n;
    double s = 1;
    cin >> n;
    for (i = 1; i <= n; i++) {
       s *= double(2 * i) / (2 * i + 1);
    }
    cout << s;
}