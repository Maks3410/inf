#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    char s[100], *p = NULL, second_name[50], last_name[50], name[50];
    gets_s(s);

    p = strchr(s, ' ');
    strncpy_s(second_name, s, p - s);
    strcpy_s(s, &s[p - s + 1]);

    p = strchr(s, ' ');
    strncpy_s(name, s, 1);
    strcpy_s(s, &s[p - s + 1]);
    strcat_s(name, ".");

    strncpy_s(last_name, s, 1);
    strcpy_s(s, &s[p - s + 1]);
    strcat_s(last_name, ". ");

    strcat_s(name, last_name);
    strcat_s(name, second_name);

    cout << name;
}