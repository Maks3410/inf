#include <iostream>
using namespace std;

int numbersSum(int n){
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n, k=0;
    cin >> n;
    while (n) {
        k++;
        n -= numbersSum(n);
    }
    cout << k;
}
