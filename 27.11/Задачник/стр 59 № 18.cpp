#include <iostream>

using namespace std;

bool is_prime(int n) {
    bool f = true;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0) f = false;
    return f;
}

int main()
{
    int n;
    cin >> n;
    bool f = false;
    for (int i = 2; i <= n / 2; i++) {
        if (is_prime(i)) if (is_prime(n - i)) {
            cout << "True, " << n << " = " << i << " + " << n - i; break; f = true;
        }
    }
}