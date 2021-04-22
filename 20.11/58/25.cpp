#include <iostream>

using namespace std;
int main() {
	int a, k = 0; 
	do {
		cin >> a;
		if (a % 2 == 0 && a > 0) k++;
	} while (a != 0);
	cout << k;
}