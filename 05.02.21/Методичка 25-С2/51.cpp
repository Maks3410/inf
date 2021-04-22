#include <cstdio>
#include <iostream>
#define N 40
using namespace std;

int main(){
    int a[N];
    int i, j, k;

    k = 0;

    for (i=0; i<N; i++)
        scanf_s("%d", &a[i]);

    for (i = 0; i < N/2; i++){
        if (a[i] % 16 == 15 && a[i] > k) k = a[i];
    }

    cout << k;
}
