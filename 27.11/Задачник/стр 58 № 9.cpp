#include <iostream>

using namespace std;


int main()
{
    int n, ans=0;
    cin >> n;
    for (int i = n; i > 1; i--) {
        if (n % i == 0 && i % 2 == 1) ans = i;
    }
    cout << ans;
}