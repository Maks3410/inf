#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (y > x * x - 2 && (y < x || y < -x)) cout "True";
	else cout "False";
}