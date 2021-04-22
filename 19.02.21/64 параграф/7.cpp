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

int numbers_sum(int n){
    int sum = 0;
    while (n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void sort_arr(int *a){
    int t;
    bool f;
    for (int i = 0; i < N - 2; i++) {
        f = true;
        for (int j = N - 1; j > i - 1; j--) {
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

void reverse_second_part(int *a){
    int t, k = 1;
        for(int i = N / 2; i < N * 3 / 4; i++){
            t = a[i];
            a[i] = a[N-k];
            a[N-k] = t;
            k++;
        }
}

void print_arr(int *a) {
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[N];
    create_arr(a, 5, 17);
    print_arr(a);
    sort_arr(a);
    for (int i = N - 1; i > 0; i--){
        if (a[i - 1] == a[i]) {cout << a[i];
        break;
        }
    }
}