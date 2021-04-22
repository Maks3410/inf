#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int a[N], f, d;
    cin >> f >> d;
    for (int i = 0; i < N; i++){
        a[i] = f + i*d;
    }

    for (int i : a){
        cout << i << ' ';
    }
}