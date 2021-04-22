#include <iostream>

using namespace std;

void dividers(int n) {
	int i;
	for (i = 1; i <= n; i++) {
		cout << '-';
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	dividers(n);
}