#include <iostream>

using namespace std;


int count_dividers(int n) {
    int k = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) k++;
    }
    return k;
}

int main() {
    int m, n, max_k = 0;
    cin >> m >> n;
    for (int i = 1; i <= k; i++) {
        if (max_k < count_dividers(i)) max_k = i;
    }
    cout << max_k;
}