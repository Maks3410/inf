#include <iostream>
using namespace std;

void multiply(int a, int b) {
    int ans = a, i;
    if (b < 0) {
        ans = -ans;
        for (i = -1; i > b; i--)
            ans -= a;
    }
    else
        if (b > 0)
            for (i = 1; i < b; i++)
                ans += a;
    cout << ans;
}

int main() {
    int a, b;
    cin >> a >> b;
    multiply(a, b);
}
