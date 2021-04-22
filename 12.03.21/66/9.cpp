#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    char ext[15], *p = NULL, s[50], f[15]=".";
    int k = 0;
    gets_s(s);
    gets_s(f);

    p = strstr(s, f);

    while (p != NULL) {
        k++;
        p = strstr(p + 1, f);
    }

    cout << k;
}