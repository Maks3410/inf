#include <iostream>

using namespace std;

void even_positive() {
	int a, k = 0;
	do {
		cin >> a;
		if (a % 2 == 0 && a > 0) k++;
	} while (a != 0);
	cout << k;
}

int main() {
	even_positive();
}