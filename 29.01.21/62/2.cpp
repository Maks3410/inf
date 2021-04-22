#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int a[N];
    for (int i = 0; i < N; i++){
        a[i] = pow(2, i+1);
    }

    for (int i : a){
        cout << i << ' ';
    }
}