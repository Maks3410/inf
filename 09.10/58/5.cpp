#include <iostream>
using namespace std;
int main() {
    int a, b, s, i;
    cin >> a >> b;
    s = 0;
    for (i = a; i <= b; i++) s += i * i;
    cout << s;
}