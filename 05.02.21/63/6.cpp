#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
    const int N = 10;
    int a[N], x;

    srand(time(NULL));

    for (int & j : a) {
        j = rand() % 100 + 1;
    }

    for (int i : a)
        cout << i << ' ';

    cout << endl;

    for (int i = 0; i + 1 < N; i += 2) {
        x = a[i];
        a[i] = a[i + 1];
        a[i + 1] = x;
    }

    for (int i : a)
        cout << i << ' ';
}