#include <iostream>

using namespace std;

bool f(int A, int x, int y) {
    return (2 * x + y > A) || (y > 20) || (x > 30);
}

int main() {
    bool flag;
    for (int a = 500; a > -500; a--) {
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