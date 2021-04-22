#include <iostream>
using namespace std;

int f(int a, int n){
    if (n == a) return 1;
    if (n % 2 != 0) return f(a, n-1);
    return f(a, n - 1) + f(a, n / 2);
}

int main()
{
    cout << f(1, 16);
    return 0;
}

