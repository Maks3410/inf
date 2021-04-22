#include <iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
    for (int i = 1; i <= n; i++) ans *= i;
    return ans;

}

int main() {
    int a;
    cin >> a;
    cout << factorial(a);
}