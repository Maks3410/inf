#include <iostream>

using namespace std;

int main() {
	int n;
	if (n == 1 || n == 2 || n == 12) cout << "Winter";
	else if (2 < n && n < 6) cout << "Spring";
	else if (5 < n && n < 9) cout << "Summer";
	else if (9 < n && n < 13) cout << "Autumn";
	else cout << "Error"
}