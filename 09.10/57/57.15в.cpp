#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (y * y + x * x < 1) cout << "True";
	else cout << "False";
}