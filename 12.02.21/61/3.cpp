#include <iostream>
using namespace std;

int bin(int a) {
    if (a == 0) return 0;
    return a % 2 + bin(a / 2) * 10;
}


int main(){
    int a;
    cin >> a;
    cout << bin(a);
}
