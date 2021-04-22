#include <iostream>

using namespace std;

void printEight(int x) {
	int k = 65536, s;
	while (k > 0){
		s = x / k;
		if (s < 10) cout << s;
		else switch (s)
		{
		case 10: cout << 'A'; break;
		case 11: cout << 'B'; break;
		case 12: cout << 'C'; break;
		case 13: cout << 'D'; break;
		case 14: cout << 'E'; break;
		case 15: cout << 'F'; break;
		}
		x %= k;
		k /= 16;
	}
}


int main() {
	int n;
	cin >> n;
	printEight(n);
}