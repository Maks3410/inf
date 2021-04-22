#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    const int N=70;
    int a[N];
    int i, j, m;

    m = 0;

    for (i=0; i<N; i++)
        scanf_s("%d", &a[i]);

    for (i = 0; i < N; i++){
        if (a[i] % 2 == 1 && a[i] > 0){
            if (m == 0) m = a[i];
            else if (a[i] < m) m = a[i];
        }
    }

    cout << m;
}
