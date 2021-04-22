#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
    const int N = 10;
    int a[N], b[N];

    srand(time(NULL));

    for (int & j : a) {
        j = rand() % 10 + 1;
    }

    for (int i : a)
        cout << i << ' ';

    cout << endl;

    for (int i = 0; i < N; i += 1) {

        b[i] = a[(i + 4) % N];
    }

    for (int i : b)
        cout << i << ' ';

}