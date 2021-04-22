#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if ((y < 1 && x < 1) || (x * x + y * y < 1)) cout "True";
	else cout "False";
}