#include <iostream>

using namespace std;


int main() {
    const int N = 54; int F = 6;
    int a[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i * 2 + j >= 61 || i + j * 2 >= 61)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    for (int k = 0; k < 25; k++)
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (a[i][j] == 0){
                    if (a[i + 1][j] > 0 && a[i][j + 1] > 0 && a[i * 2][j] > 0 && a[i][j * 2] > 0) a[i][j] =
                            -1 * max(max(a[i + 1][j], a[i][j + 1]), max(a[i * 2][j], a[i][j * 2]));
                    else if (a[i + 1][j] < 0 || a[i][j + 1] < 0 || a[i * 2][j] < 0 || a[i][j * 2] < 0) a[i][j] =
                            -1 * min(min(a[i + 1][j], a[i][j + 1]), min(a[i * 2][j], a[i][j * 2]));
                }
            }
        }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}