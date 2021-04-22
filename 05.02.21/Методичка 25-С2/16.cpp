#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    const int N=30;
    int a[N];
    int i, l, lmax, s, smax;

    l = 0;
    s = 0;
    lmax=0;
    smax=0;

    for (i=0; i<N; i++)
        scanf_s("%d", &a[i]);

    for (i = 0; i < N - 1; i++) {
        if (a[i + 1] > a[i]) {
            if (l) {
                l++;
                s += a[i + 1];
            }
            else {
                l++;
                s += a[i] + a[i + 1];
            }
        }
        else {
            if (lmax < l) {
                lmax = l;
                l = 0;
                smax = s;
                s = 0;
            }
            else l = 0;
        }
    }

    cout << smax;
}