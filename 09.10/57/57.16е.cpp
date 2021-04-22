#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (x * x + y * y < 1 && (x > 0 || y > -x)) cout "True";
	else cout "False";
}