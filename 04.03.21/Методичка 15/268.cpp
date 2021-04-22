#include <iostream>

using namespace std;

bool f(int A, int x, int y) {
    return !(((x > A) && (x * x < 19)) || ((y * y > 91) && (y < A)));
}

int main() {
    bool flag;
    int cnt = 0;
    for (int a = 500; a > -500; a--) {
        flag = true;
        for (int x = 0; x <= 1000 && flag; x++)
            for (int y = 0; y <= 1000 && flag; y++)
                if (!f(a, x, y))
                    flag = false;
        if (flag)
            cnt++;
    }
    cout << cnt;
}