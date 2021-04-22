#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

void create_arr(int *a, int N, int lo, int hi){
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

void sort_arr(int *a, int N){
    int t;
    bool f;
    for (int i = 0; i < N - 1; i++) {
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

void reverse_second_part(int *a, int N){
    int t, k = 1;
        for(int i = N / 2; i < N * 3 / 4; i++){
            t = a[i];
            a[i] = a[N-k];
            a[N-k] = t;
            k++;
        }
}

void print_arr(int *a, int N) {
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[10000], n, k, m;
    double sum = 0;
    ifstream fin;
    fin.open("26-k5.txt");
    fin >> n >> k >> m;

    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }
    fin.close();

    sort_arr(a, n);

    cout << a[n-m];

    for (int i = 0; i < k; i++) {
        sum += a[i];
    }

    cout << ' ' << int(sum / k);
}