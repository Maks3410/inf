#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    char s[50], *p = NULL, s2[50];
    int sum = 0;
    gets_s(s);

    p = strchr(s, '+');

    while (p != NULL) {
        strncpy_s(s2, s, p - s);
        sum += atoi(s2);
        strcpy_s(s, &s[p - s + 1]);
        p = strchr(s, '+');
    }
    cout << sum + atoi(s);
}