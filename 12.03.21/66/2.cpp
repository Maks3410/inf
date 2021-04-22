#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    char s[50];
    int len;
    bool flag = true;
    gets_s(s);
    len = strlen(s);

    for (int i = 0; i * 2 < len; i++) {
        if (s[i] != s[len - 1 - i]) flag = false;
    }

    printf("%d", flag);
}