#include <iostream>

using namespace std;

void numbers(int n) {
	int n1, k = -1;
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
	int n;
	cin >> n;
	numbers(n);
}