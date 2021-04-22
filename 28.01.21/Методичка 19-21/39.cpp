#include <iostream>
using namespace std;

int main(){
    const int N = 25;
    int a[N];
    for (int i = 1; i < N; i++) {
        if (i + 2 >= N || i * 2 >= N) a[i] = 1;
        else a[i] = 0;
    }
    for (int j = 0; j < N; j++)
        for (int i = 1; i < N; i++){
            if (a[i] == 0) {
                if (a[i + 2] > 0 && a[i * 2] > 0)
                    a[i] = max(a[i + 2], a[i * 2]) * -1;
                else if (a[i + 2] < 0 || a[i * 2] < 0)
                    a[i] = min(a[i + 2], a[i * 2]) * -1 + 1;
            }
        }

    for (int i = 1; i < N; i++) {
        if (a[i] == -1) {
            cout << i << ' ';
            break;
        }
    }

    cout << endl << endl;

    for (int i = 1; i < N; i++){
        if (a[i] == 2)
            cout << i << ' ';
    }

    cout << endl << endl;

    for (int i = 1; i < N; i++){
        if (a[i] == -2)
            cout << i << ' ';
    }
}