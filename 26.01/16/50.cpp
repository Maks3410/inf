#include <iostream>
using namespace std;

int f(int n) {
    if (n <= 3) return n;
    else if (n % 2 == 0) return n + 3 + f(n-1);
    else if (n % 2 == 1) return n * n + f(n-2);
}


int main() {
    int k = 0;
    for (int n = 1; n <= 1000; n++) {
        if (f(n) % 7 == 0) k++;
    }
    cout << k;
}
