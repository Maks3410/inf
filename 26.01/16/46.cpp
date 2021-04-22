#include <iostream>
using namespace std;

int f(int n) {
    if (n <= 3) return n;
    else if (n % 2 == 0) return 2 * n * n + f(n - 1);
    else if (n % 2 == 1) return n * n * n + n + f(n-1);
}


int main() {
    int k = 0;
    for (int n = 1; n < 10000000; n++) {
        if (f(n) < 10000000) k++;
        else break;
    }
    cout << k;
}
