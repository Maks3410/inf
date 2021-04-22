#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    char s[50], *p = NULL, s2[50];
    gets_s(s);

    p = strchr(s, '/');

    while (p != NULL) {
        for (int i = 0; i < p - s; i++)
            cout << s[i];
        cout << '\n';
        strcpy_s(s, &s[p - s + 1]);
        p = strchr(s, '/');
    }
}