#include <iostream>

using namespace std;
int main() {
	int a, b, i, j, k;
	bool f;
	cin >> a >> b;
	for (i = a; i <= b; i++) {
		f = false;
		for (j = 2; j <= i / 2; j++) if (i % j == 0) f = true;
		if (!f) cout << i << endl;
	}
}