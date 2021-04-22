#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (y < 1 && x > 0 && (x * x + y * y < 1 || y > x - 1)) cout "True";
	else cout "False";
}