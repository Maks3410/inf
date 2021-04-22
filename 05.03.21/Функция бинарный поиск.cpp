#include <iostream>

using namespace std;

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
