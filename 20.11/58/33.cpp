#include <iostream>

using namespace std;
int main() {
	int n, n1, k = -1;
	cin >> n;
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