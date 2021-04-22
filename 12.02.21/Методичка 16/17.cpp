#include <iostream>
using namespace std;

int f(int n) {
    if (n < 3) return n + 3;
    else if (n % 3 == 0) return (n + 2) * f(n - 4);
    else return n + f(n - 1) + 2 * f(n - 2);
}

int main(){
    cout << f(20);
}
