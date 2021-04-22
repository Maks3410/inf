#include <iostream>

using namespace std;

int numbersAmount(int a) {
    int k = 0;
    while (a) {
        k++;
        a /= 10;
    }
    return k;
}

int main() {
    int a;
    cin >> a;
    cout << numbersAmount(a);
}