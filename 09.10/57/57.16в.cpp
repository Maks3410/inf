#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (y < 2 - x * x && (y > x || y > 0)) cout "True";
	else cout "False";
}