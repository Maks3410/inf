#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    const int N= 2014;
    int a[N];
    int i, k = 0, j;

    for (i=0; i<N; i++)
        scanf_s("%d", &a[i]);

    for (i = 0; i < N/2; i++){
        if (a[i] + a[N - i - 1] > 20) k++;
    }

    cout << k;
}
