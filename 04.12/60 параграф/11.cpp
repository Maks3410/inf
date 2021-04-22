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
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        for (int j = 2; j < 10; j ++)
            if (numbersSum(i) == numbersSum(j * i)) cout << "sum " << i << " = sum (" << i << " * " << j << ")\n";
}
