#include <iostream>
using namespace std;

int f(int n) {
    if (n > 12) return 2 * n - 5;
    else return 2 * f(n + 2) + n - 4;
}

int main(){
    cout << f(1);
}
