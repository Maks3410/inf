#include <iostream>

using namespace std;

int main() {
    const int N = 10;
    int a[N], min1, min2 = 0, min3 = 0;

    for (int & j : a) {
        cin >> j;
    }

    min1 = a[0];

    for (int i : a) {
        if (i < min1) {
            min3 = min2;
            min2 = min1;
            min1 = i;
        }
    }

    cout << min1 << ' ' << min2 << ' ' << min3 << ' ';
}