#include <iostream>

using namespace std;

void primes(int a, int b) {
	int i, j, k;
	bool f;
	
	for (i = a; i <= b; i++) {
		f = false;
		for (j = 2; j <= i / 2; j++) if (i % j == 0) f = true;
		if (!f) cout << i << endl;
	}
}

int main() {
	cin >> a >> b;
	primes(a, b); 
}