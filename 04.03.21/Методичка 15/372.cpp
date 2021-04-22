#include <iostream>

using namespace std;

bool f(int A, int x, int y) {
    return ((y - 20 < A) && (10 - x < A)) || (x * (y + 2) > 48);
}

int main() {
    bool flag;
    for (int a = 0; a <= 10000; a++) {
        flag = true;
        for (int x = 0; x <= 1000 && flag; x++)
            for (int y = 0; y <= 1000 && flag; y++)
                if (!f(a, x, y))
                    flag = false;
        if (flag) {
            cout << a;
            return 0;
        }
    }
}