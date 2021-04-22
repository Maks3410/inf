#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    char ext[15], *p = NULL, file[50], rext[15]=".";

    gets_s(file);
    gets_s(ext);

    p = strchr(file, '.');
    strcat_s(rext, ext);

    if (p != NULL)
        strncpy_s(file, file, p - file);

    strcat_s(file, rext);
    puts(file);
}