#include <iostream>
using namespace std;

int nod(int a, int b) {
    while (a * b != 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    return a + b;
}

int nod_rec(int a, int b) {
    if (a * b == 0) return a+b;
    if (a > b) return nod_rec(a % b, b);
    else return nod_rec(a, b % a);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << nod(a, b) << "\n" << nod_rec(a, b);
}
