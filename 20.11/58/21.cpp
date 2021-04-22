#include <iostream>

using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b;
	while (a % b != 0) {
		if (a > b) a %= b;
		else { c = a; a = b; b = c; a %= b; }
	}
	cout << b;
}