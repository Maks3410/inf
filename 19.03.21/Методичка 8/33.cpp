#include <iostream>

using namespace std;
int cnt = 0;
bool f = false;

void words(char *alph, char *word, int n){
    if (n == strlen(word)) {
        if (strcmp(word, "ROPOT") == 0) f = true;
        if (f) cnt++;
        if (strcmp(word, "TOPOR") == 0) f = false;
        return;
    }
    for (int i = 0; i < strlen(alph); i++) {
        word[n] = alph[i];
        words(alph, word, n + 1);
    }
}

int main() {
    char alphabet[] = "OPRT", word[] = ".....";
    words(alphabet, word, 0);
    cout << cnt;
}