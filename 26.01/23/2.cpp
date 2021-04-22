#include <iostream>
using namespace std;

int f(int a, int n){
    if (n == a) return 1;
    if (n % 4 != 0) return f(a, n-1);
    return f(a, n - 1) + f(a, n / 4);
}

int main()
{
    cout << f(1, 55);
    return 0;
}

