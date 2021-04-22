#include <iostream>

using namespace std;

void drawsquare(int x) {
	int i, j;
	for (i = 0; i < x; i++) {
		cout << '*';
	}
	cout << endl;
	for (i = 0; i < x - 2; i++) {
		cout << '*';
		for (j = 0; j < x - 2; j++) {
			cout << ' ';
		}
		cout << '*' << endl;
	}
	for (i = 0; i < x; i++) {
		cout << '*';
	}
	cout << endl;
}


int main() {
	int n;
	cin >> n;
	drawsquare(n);
}