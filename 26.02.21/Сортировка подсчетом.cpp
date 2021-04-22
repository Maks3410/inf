#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int N = 10;
void print_arr(int *a);

void create_arr(int *a, int lo, int hi){
    int i;
    srand(time(NULL));
    for (i = 0; i < N; i++)
        a[i] = rand() % (hi - lo + 1) + lo;
}

void count_sort(int *a, int n){
    int b[10000]={0}, last = 0;
    for (int i = 0; i < n; i++) {
        b[a[i]]++;
    }

    for (int el = 0; el < 10000; el++)
        for (int j = 0; j < b[el]; j++) {
            a[last] = el;
            last++;
        }
    print_arr(b);
}


void print_arr(int *a) {
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[N];
    create_arr(a, 5, 18);
    print_arr(a);
    count_sort(a, N);
    print_arr(a);
}