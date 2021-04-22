#include <iostream>

using namespace std;

void column(int n) {
	int n1, k = -1, i;
	n1 = n;
	while (n1) {
		n1 /= 10;
		k++;
	}
	while (n) {
		cout << n / int(pow(10, k)) << endl;
		n %= int(pow(10, k));
		k--;
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	column(n);
}