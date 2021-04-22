#include <iostream>
using namespace std;

int main(){
    int a[201];
    for (int i = 1; i <= 200; i++) {
        if (i + 1 >= 201 || i * 5 >= 201) a[i] = 1;
        else a[i] = 0;
    }
    for (int j = 0; j < 200; j++)
        for (int i = 1; i <= 200; i++){
            if (a[i] == 0) {
                if (a[i + 1] > 0 && a[i * 5] > 0)
                    a[i] = max(a[i + 1], a[i * 5]) * -1;
                else if (a[i + 1] < 0 || a[i * 5] < 0)
                    a[i] = min(a[i + 1], a[i * 5]) * -1 + 1;
            }
        }

    for (int i = 1; i <=200; i++){
        if (a[i] == 1)
            cout << i << ' ';
    }
    cout << endl << endl;

    for (int i = 1; i <=200; i++){
        if (a[i] == -1)
            cout << i << ' ';
    }
    cout << endl << endl;

    for (int i = 1; i <=200; i++){
        if (a[i] == 2)
            cout << i << ' ';
    }
    cout << endl << endl;
    for (int i = 1; i <=200; i++){
        if (a[i] == -1 || a[i] == -2)
            cout << i << ' ';
    }
    cout << endl << endl;

    for (int i = 1; i <=200; i++){
        cout << a[i] << ' ';
    }
}