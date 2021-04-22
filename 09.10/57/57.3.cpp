#include <iostream>


using namespace std;

int main() {
	int a;
	cin >> a;
	if (a / 100 > 0 && a / 1000 == 0) cout << "True";
	else cout << "False";
}