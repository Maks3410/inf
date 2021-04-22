#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int N = 10;

void create_arr(int *a, int lo, int hi){
    int i;
    srand(time(NULL));
    for (i = 0; i < N; i++)
        a[i] = rand() % (hi - lo + 1) + lo;
}

void sort_arr(int *a){
    int t;
    bool f;
    for (int i = 0; i < N - 2; i++) {
        f = true;
        for (int j = N - 1; j > i; j--) {
            if (a[j - 1] > a[j]) {
                f = false;
                t = a[j - 1];
                a[j - 1] = a[j];
                a[j] = t;
            }
        }
        if (f) return;
    }
}

void print_arr(int *a) {
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[N], k = 1;

    create_arr(a, 5, 17);
    print_arr(a);
    sort_arr(a);

    for (int i = 0; i < N - 1; i++){
        if (a[i + 1] > a[i]) k++;
    }

    cout << k;
}