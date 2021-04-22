#include <iostream>

using namespace std;

bool f(int A, int x, int y) {
    return ((y - 2 * x) != 11) || (2 * y > A) || (x > A);
}

int main() {
    bool flag;
    for (int a = 500; a > -500; a--) {
        flag = true;
        for (int x = 1; x <= 1000 && flag; x++)
            for (int y = 1; y <= 1000 && flag; y++)
                if (!f(a, x, y))
                    flag = false;
        if (flag) {
            cout << a;
            return 0;
        }
    }
}