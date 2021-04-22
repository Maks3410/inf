#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
    const int N = 10;
    int a[N], x;

    srand(time(NULL));

    for (int & j : a) {
        j = rand() % 5;
    }

    for (int i : a)
        cout << i << ' ';

    cout << endl;
    cin >> x;

    for (int i = 0; i < N; i++)
        if (a[i] == x) cout << i << ' ';

}