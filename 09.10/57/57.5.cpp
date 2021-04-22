#include <iostream>


using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a / 100 == b || a % 100 / 10 == b || a % 10 == b) cout << "True";
	else cout << "False";
}