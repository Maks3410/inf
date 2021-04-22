#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    const int N = 10;
    int a[N], lit_k = 0, lit_s = 0, b_k = 0, b_s = 0;

    srand ( time(NULL) );

    for (int j = 0; j < N; j++) {
        a[j] = rand() % 101;
    }

    for (int i : a) {
        if (i < 50) {lit_k++; lit_s += i;}
        else {b_k++; b_s += i;}
    }

    for (int i : a)
        cout << i << ' ';

    cout << endl << double(lit_s) / lit_k << endl << double(b_s) / b_k << endl;
}