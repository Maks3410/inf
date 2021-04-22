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


void print_arr(int *a) {
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[N];
    create_arr(a, 5, 17);
    print_arr(a);
    quick_sort(a, 0, N-1);
    print_arr(a);
}