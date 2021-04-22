#include <iostream>

using namespace std;
const int N = 35;

void quick_sort(int *a, int ns, int ne){
    int left, right, t, mid;
    if (ns >= ne) return;
    left = ns;
    right = ne;
    mid = a[(left+right)/2];
    while (left <= right) {
        while (a[left] > mid) left++;
        while (a[right] < mid) right--;
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

int bin_search(int *a, int x, int n) {
    int l = 0, r = n, t;
    while (l < r - 1) {
        t = (l + r) / 2;
        if (x > a[t]) r = t;
        else l = t;
    }
    if (a[l] == x) return l;
    else return -1;
}

void print_arr(int *a) {
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[N], k, x;

    for (int & i : a)
        cin >> i;

    quick_sort(a, 0, N - 1);

    print_arr(a);

    cin >> x;

    k = bin_search(a, x, N);

    while (a[k] == x) k--;
    k++;
    while (a[k] == x) {cout << k << ' '; k++;}
}