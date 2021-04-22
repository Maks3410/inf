#include <iostream>
using namespace std;

bool increases(int n){
    int a = n % 10;
    n /= 10;
    while (n) {
        if (n % 10 >= a) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = pow(10, n-1); i < pow(10, n); i++)
        if (increases(i)) cout << i << endl;
}

