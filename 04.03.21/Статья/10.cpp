#include <iostream>

using namespace std;

bool f(int A, int x, int y) {
    return (y - 20 * sin(x / 5) > 10) || (4 * y + x * x >120) || (y - x * x - A * A < 10 - 2 * A * x);
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