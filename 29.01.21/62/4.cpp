#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    const int N = 10;
    int a[N], i = 1, randi;

    srand ( time(NULL) );

    for (int j = 0; j < N; j++) {
        a[j] = 0;
    }

    while (i <= N) {
        randi = rand() % N;
        if (a[randi] == 0) {
            a[randi] = i;
            i++;
        }
    }

    for (int j : a){
        cout << j << ' ';
    }
}