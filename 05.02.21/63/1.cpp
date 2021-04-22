#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    const int N = 10;
    int a[N], min_i = 501, max_i = -1;

    srand ( time(NULL) );

    for (int j = 0; j < N; j++) {
        a[j] = rand() % 1001 - 500;
    }

    for (int i : a) {
        if (i > 0 && i % 2 == 0) {
            if (i < min_i) min_i = i;
            if (i > max_i) max_i = i;
        }
    }

    for (int i : a)
        cout << i << ' ';

    if (max_i > 0)
        cout << endl << min_i << endl << max_i;
    else cout << endl << "No such values";
}