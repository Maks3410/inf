#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
    char s[200], *p, s1[200], c, year_s[4], k_s[5];
    int n, cnt = 0, year, k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c;
        gets_s(s);
        p = strchr(s, ' ');
        strcpy_s(s1, p + 1);
        p = strchr(s1, ' ');
        strcpy_s(s, p + 1);
        for (int j = 0; j < 4; j++)
            year_s[j] = s[j];
        p = strchr(s, ' ');
        strcpy_s(k_s, p + 1);

        year = atoi(year_s);
        k = atoi(k_s);
        if (year > 1997 && year < 2001 && k == 0) cnt++;
    }
    cout << cnt;
}