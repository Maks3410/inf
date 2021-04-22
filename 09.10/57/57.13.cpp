#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	if (11 <= n % 100 && n % 100 <= 19) cout << n << " лет";
	else if (n % 10 == 1) cout << n << " год";
	else if (2 <= n % 10 && n % 10 <= 4) cout << n << " года";
	else if (n % 10 == 0 || (5 <= n % 10 && n % 10 <= 9)) cout << n << " лет";
}