#include <iostream>

using namespace std;

bool f(int A, int x, int y) {
    return (y + 4 * x < A) || (x + 4 * y > 120) || (5 * x - 2 * y > 50);
}

int main() {
    bool flag;
    for (int a = 0; a <= 1000; a++) {
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