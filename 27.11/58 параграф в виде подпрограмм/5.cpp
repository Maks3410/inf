#include <iostream>
using namespace std;

void sum(int a, int b) {
    int s, i;
    s = 0;
    for (i = a; i <= b; i++) s += i * i;
    cout << s;
}

int main() {
    int a, b;
    cin >> a >> b;
    sum(a, b);
}