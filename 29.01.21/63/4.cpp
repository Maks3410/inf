#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
    const int N = 10;
    int a[N], curr, k = 0, max_curr = 0;

    srand(time(NULL));

    for (int & j : a) {
        j = rand() % 3 + 10;
    }

    curr = a[0];

    for (int i : a) {
        if (i == curr) k++;
        else {
            if (k > max_curr) max_curr = k;
            k = 1;
            curr = i;
        }
    }

    for (int i : a)
        cout << i << ' ';

    cout << endl << max_curr;
}