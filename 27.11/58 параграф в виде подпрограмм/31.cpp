#include <iostream>

using namespace std;

void factorial(int n) {
	int n1, k = -1;
	n1 = n;
	while (n1) {
		n1 /= 10;
		k++;
	}
	while (n) {
		cout << n / pow(10, k);
		n %= pow(10, k);
	}
}

int main() {
	int n;
	cin >> n;
	factorial(n);
}