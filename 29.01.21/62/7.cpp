#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    const int N = 10;
    int a[N], cnt = 0;

    srand ( time(NULL) );

    for (int j = 0; j < N; j++) {
        a[j] = rand() % 1001 + 1000;
    }

    for (int i : a) {
        if (i % 100 / 10 % 2 == 0) cnt++;
    }

    for (int i : a)
        cout << i << ' ';

    cout << endl << cnt;
}