#include <iostream>

using namespace std;

void column(int n) {
	int n1, k = -1, i;
	n1 = n;
	while (n1) {
		n1 /= 10;
		k++;
	}
	for (i = 0; i <= k; i++) {
		cout << n % 10 << endl;
		n /= 10;
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	column(n);
}