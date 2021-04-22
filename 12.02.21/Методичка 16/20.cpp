#include <iostream>
using namespace std;

int g(int n);

int f(int n) {
    if (n == 1) return 1;
    return 3 * f(n - 1) + g(n - 1) - n + 5;
}

int g(int n) {
    if (n == 1) return 1;
    return f(n - 1) + 3 * g(n - 1) - 3 * n;
}

int main(){
    cout << f(14) + g(14);
}
