#include <iostream>
using namespace std;

int f(int a, int n){
    if (n == a) return 1;
    if (n % 3 != 0 && n % 4 != 0) return f(a , n-1);
    else if (n % 3 == 0 && n % 4 != 0 && n/3 >= a) return f(a, n-1) + f(a, n/3);
    else if (n % 3 != 0 && n % 4 == 0 && n/4 >= a) return f(a, n-1) + f(a, n/4);
    else if (n % 3 == 0 && n % 4 == 0 && n/4 >= a) return f(a, n-1) + f(a, n/3) + f(a, n/4);
}

int main()
{
    cout << f(1, 25);
    return 0;
}

