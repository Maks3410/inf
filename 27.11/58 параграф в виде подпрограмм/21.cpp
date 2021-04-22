#include <iostream>

using namespace std;

void euclid(int a, int b) {
	int c;
	while (a % b != 0) {
		if (a > b) a %= b;
		else { c = a; a = b; b = c; a %= b; }
	}
	cout << b;
}

int main() {
	int a, b;
	cin >> a >> b;
	euclid(a, b);
}