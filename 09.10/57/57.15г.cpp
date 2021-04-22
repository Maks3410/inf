#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (y * y + (x - 2) * (x - 2) < 1) cout << "True";
	else cout << "False";
}