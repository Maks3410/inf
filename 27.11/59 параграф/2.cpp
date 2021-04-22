#include <iostream>

using namespace std;

void drawsquare(int x) {
	int i, j;
	for (i = 0; i < n; i++) {
		cout << '*';
		endl;
	}
	for (i = 0; i < n - 2; i++) {
		cout << '*';
		for (j = 0; j < n - 2; j++) {
			cout << ' ';
		}
		cout << '*' << endl;
	}
	for (i = 0; i < n; i++) {
		cout << '*';
		endl;
	}
}


int main() {
	int n;
	cin >> n;
	drawsquare(n);
}