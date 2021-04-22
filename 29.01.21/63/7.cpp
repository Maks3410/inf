#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
    const int N = 10;
    int a[N], x;

    srand(time(NULL));

    for (int & j : a) {
        j = rand() % 10 + 1;
    }

    for (int i : a)
        cout << i << ' ';

    cout << endl;

    for (int i = 0; (i < N / 4) || (i >= N / 2 && i < N / 4 * 3 + 1); i += 1) {
        x = a[i];
        a[i] = a[(N / 2) * (i / (N / 2)) + (N / 2 - 1 - (i % (N / 2)))];
        a[(N / 2) * (i / (N / 2)) + (N / 2 - 1 - (i % (N / 2)))] = x;
    }

    for (int i : a)
        cout << i << ' ';

}