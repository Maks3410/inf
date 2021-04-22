#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, e, min, max;
	cin >> a >> b >> c >> d >> e;
	if (a > b) { max = a; min = b; }
	else { max = b; min = a; }
	if (max < c) { max = c; }
	if (max < d) { max = d; }
	if (max < e) { max = e; }
	if (min > c) { min = c; }
	if (min > d) { min = d; }
	if (min > e) { min = e; }
	cout << max << ' ' << min;
}