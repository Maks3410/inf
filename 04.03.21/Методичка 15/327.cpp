#include <iostream>

using namespace std;

bool f(int A, int x, int y, int z) {
    return (48 != (y + 2 * x + z)) || (A < x) || (A < y) || (A < z);
}

int main() {
    bool flag;
    for (int a = 500; a > -500; a--) {
        flag = true;
        for (int x = 0; x <= 1000 && flag; x++)
            for (int y = 0; y <= 1000 && flag; y++)
                for (int z = 0; z <= 1000 && flag; z++)
                    if (!f(a, x, y, z))
                        flag = false;
        if (flag) {
            cout << a;
            return 0;
        }
    }
}