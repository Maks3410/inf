#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    const int N = 10;
    int a[N], even_sum = 0, odd_sum = 0;

    srand ( time(NULL) );

    for (int j = 0; j < N; j++) {
        a[j] = rand() % 81 + 20;
    }

    for (int i : a) {
        if (i % 2) odd_sum += i;
        else even_sum += i;
    }

    for (int i : a)
        cout << i << ' ';

    cout << endl << even_sum << endl << odd_sum;
}