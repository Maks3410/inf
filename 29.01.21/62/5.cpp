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
    a[0] = 5;

    while (i <= N) {
        if (i == 5) {i++; continue;}
        randi = rand() % N;
        if (randi == 0) continue;
        if (a[randi] == 0) {
            a[randi] = i;
            i++;
        }
    }

    for (int j : a){
        cout << j << ' ';
    }
}