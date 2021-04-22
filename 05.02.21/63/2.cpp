#include <iostream>

using namespace std;

int main() {
    const int N = 10;
    int a[N], max_i, k=0;

    for (int & j : a) {
        cin >> j;
    }

    max_i = a[0];

    for (int i : a) {
        if (i > max_i) {
            max_i = i;
            k = 1;
        }
        else if (i == max_i) k++;
    }

    cout << k << ' ';
}