#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int a[N];
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i < N; i++){
        a[i] = a[i-1] + a[i-2];
    }

    for (int i : a){
        cout << i << ' ';
    }
}