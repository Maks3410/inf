#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    const int N=30;
    int a[N];
    int i, j;
    float s;

    s = 0;
    j = 0;

    for (i=0; i<N; i++)
        scanf_s("%d", &a[i]);

    for (i = 0; i < N; i++) {
        s += a[i];
    }

    s /= N;

    for (i = 0; i < N; i++) {
        if (a[i] > s) j++;
    }
    cout << j;
}