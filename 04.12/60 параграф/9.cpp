#include <iostream>
using namespace std;

int fibonacci(int n){
    if (n <= 2) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);

}

int main() {
    int a;
    cin >> a;
    cout << fibonacci(a);
}