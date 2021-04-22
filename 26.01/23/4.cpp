#include <iostream>
using namespace std;

int f(int a, int n){
    if (n == a) return 1;
    if (n % 2 != 0 && n % 4 != 0) return f(a , n-1);
    else if (n % 2 == 0 && n % 4 != 0 && n/2 >= a) return f(a, n-1) + f(a, n/2);
    else if (n % 2 != 0 && n % 4 == 0 && n/4 >= a) return f(a, n-1) + f(a, n/4);
    else if (n % 2 == 0 && n % 4 == 0 && n/4 >= a) return f(a, n-1) + f(a, n/2) + f(a, n/4);
}

int main()
{
    cout << f(1, 17);
    return 0;
}

