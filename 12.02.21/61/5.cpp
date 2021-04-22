#include <iostream>
using namespace std;

int bin(int a) {
    if (a == 0) return 0;
    return a % 10 + bin(a / 10) * 2;
}


int main(){
    int a;
    cin >> a;
    cout << bin(a);
}
