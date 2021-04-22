#include <iostream>
using namespace std;

int f(int a, int b, int c) {
    return (!a || (b && !c));
}

int main(){
    int a, b, c;
    cout << "abc f\n";
    for (int i=0; i < 8; i++) {
        a = i / 4;
        b = (i / 2) % 2;
        c = i % 2;
        cout << a << b << c << ' ' << f(a, b, c) << endl;
    }
}