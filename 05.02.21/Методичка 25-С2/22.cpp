#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    const int N=10;
    int a[N];
    int k, f=false, kmax = 0;

    for (int & i : a)
        cin >> i;

    for (int i : a) {
        if (i < 0) {
            if (!f) {
                f = true;
                k = 1;
            } else k++;
        }
        else {
            f = false;
            if (kmax < k) {
                kmax = k;
                k = 0;
            }
        }
    }
    cout << kmax;
}
