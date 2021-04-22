#include <iostream>

using namespace std;

void reduction(int a, int b) {
    int a1 = a, b1 = b;
    while (a1 != b1) {
        if (a1 > b1) a1 -= b1;
        else b1 -= a1;
    }
    cout << a / a1 << '/' << b / a1;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    reduction(a * d, b * c);
}