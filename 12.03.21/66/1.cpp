#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    char s[50], *p = NULL;
    int len;
    gets_s(s);
    len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] == 'a') s[i] = 'b';
        else if (s[i] == 'b') s[i] = 'a';
        else if (s[i] == 'A') s[i] = 'B';
        else if (s[i] == 'B') s[i] = 'A';
    }

    printf("%s", s);
}