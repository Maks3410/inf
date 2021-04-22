#include <iostream>
using namespace std;

bool isSimple(int n){
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = n + 1; i <= n * 2 + 1; i++)
        if (isSimple(i)) {cout << i; break;}
}
