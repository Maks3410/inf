#include <iostream>
using namespace std;

int main(){
    const int N = 30;
    int a[N], k = 0, max;
    for (int & i : a) {
        cin >> i;
    }

    max = a[0];

    for (int i : a) {
        if (i > max) {
            max = i;
            k = 1;
        }
        else if (i == max) k++;
    }

    cout << k;
}