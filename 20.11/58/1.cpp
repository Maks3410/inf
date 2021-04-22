#include <iostream>
using namespace std;
int main() {
    int a, b, i, ans;
    cin >> a >> b;
    ans = a;
    if (b < 0) { ans = -ans; for (i = -1; i > b; i--) ans -= a; }
    else if (b > 0) for (i = 1; i < b; i++) ans += a;
    cout << ans;
}