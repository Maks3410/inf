#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if ((x >= 0 && x < 1 && y > 1 - x) || (x < 0 && y > 1 - x && y > 2 * x * x)) cout "True";
	else cout "False";
}