#include <iostream>

using namespace std;

void isprimal(int n) {
	int a = 1, b = 1, c, i;
	cout << 1 << ' ';
	for (i = 0; i < n - 1; i++) {
		cout << b << ' ';
		c = a + b;
		a = b;
		b = c;
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	isprimal(n);
}