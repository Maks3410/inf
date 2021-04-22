#include <iostream>


using namespace std;

int main() {
	int a, s, d, e;
	cin >> a;
	s = a / 100;
	d = a / 10 % 10;
	e = a % 10;
	if (s < d && d < e) cout << "True";
	else cout << "False";
}