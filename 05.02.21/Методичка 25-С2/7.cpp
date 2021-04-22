#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    const int N=30;
    int A[N];
    int i, x, y;
    float s;

    x = 0;
    y = 0;

    for (i=0; i<N; i++)
        scanf_s("%d", &A[i]);

    for (i = 0; i < N; i++) {
        if (A[i] > 20) {
            x++;
            y += A[i];
        }
    }

    cout << float(y) / float(x);
}