#include <iostream>
using namespace std;

bool isSimple(int n){
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, last;
    cin >> n;
    last = n - 3;
    for (int i = n; i <= 2 * n; i++)
        if (isSimple(i)) {
            if (i - last < 3) {
                cout << last << ' ' << i << endl;
                last = i;
            }
            else last = i;
        }
}
