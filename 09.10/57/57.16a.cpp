#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (y > 0 && x < 2 && y < x && (x * x + y * y > 4)) cout "True";
	else cout "False";
}