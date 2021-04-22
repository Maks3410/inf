#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main() {
    int n, k1, k2, k3, k4, i;
    double ans, a, b;
    srand(time(NULL));
    cin >> n;
    k1 = k2 = k3 = k4 = 0;
    for (i = 1; i <= n; i++) {
        a = rand() % 1000;
        b = rand() % 1000;
        ans = (a / 1000000 + b / 1000);
        if (0 <= ans && ans < 0.25) k1++;
        else if (0.25 <= ans && ans < 0.5) k2++;
        else if (0.5 <= ans && ans < 0.75) k3++;
        else if (0.75 <= ans && ans < 1) k4++;
    }
    cout << "[0; 0.25): " << k1 << endl;
    cout << "[0.25; 0.5): " << k2 << endl;
    cout << "[0.5; 0.75): " << k3 << endl;
    cout << "[0.75; 1): " << k4 << endl;
}