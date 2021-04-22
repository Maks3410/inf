#include <iostream>

using namespace std;
int main() {
    int n, n1, k;
    cin >> n;
    n1 = n;
    k = 0;
    while (n1) {
        n1 /= 10;
        k++;
    }
    n = n % int(pow(10, k - 1)) / 10  * 10 + n / int(pow(10, k - 1)) + n % 10 * int(pow(10, k - 1));
    cout << n;
}