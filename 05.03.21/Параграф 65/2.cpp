#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
const int N = 32;

void set_rand_arr(int *a, int n) {
    for (int i = 0; i < n; i++)
        a[i] = rand() % 101;
}

void quick_sort(int *a, int ns, int ne){
    int left, right, t, mid;
    if (ns >= ne) return;
    left = ns;
    right = ne;
    mid = a[(left+right)/2];
    while (left <= right) {
        while (a[left] < mid) left++;
        while (a[right] > mid) right--;
        if (left <= right) {
            t = a[left];
            a[left] = a[right];
            a[right] = t;
            left++; right--;
        }
    }
    quick_sort(a, ns, right);
    quick_sort(a, left, ne);
}

int count_bin_search(int *a, int x, int n) {
    int l = 0, r = n, t, k = 0;
    while (l < r - 1) {
        t = (l + r) / 2;
        if (x < a[t]) r = t;
        else l = t;
        k++;
    }
    if (a[l] == x) return k;
    else return 7;
}

int main() {
    int a[N], k, rand_x, sum = 0;

    srand(time(NULL));

    for (int i = 0; i < 1000; i++){
        rand_x = rand() % 101;
        set_rand_arr(a, N);
        quick_sort(a, 0, N - 1);
        sum += count_bin_search(a, rand_x, N);
    }

    cout << sum / 1000;
}