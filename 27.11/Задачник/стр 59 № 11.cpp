#include <iostream>

using namespace std;

void reduct(int& a, int& b) {
    int p1 = a, q1 = b;
    while (p1 != q1) {
        if (p1 > q1) p1 -= q1;
        else q1 -= p1;
    } 
    a /= p1;
    b /= p1;
}

int main()
{
    int p = 1, q = 1, n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        p = p * i + q;
        q = q * i;
        reduct(p, q);
    }
    cout << p << '/' << q;
}