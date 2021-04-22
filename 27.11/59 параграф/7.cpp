#include <iostream>

using namespace std;

void isprimal(int n) {
	int i;
	bool f=true;
	for (i = 2; i < n / 2; i++) {
		if (n % i == 0) f = false;
	}
	if (f) cout << '+';
	else cout << '-';
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	isprimal(n);
}