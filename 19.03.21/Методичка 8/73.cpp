#include <iostream>

using namespace std;
int cnt = 1;

bool f(char *word) {
    return strcmp(word, "TAAAA") == 0;
}

void words(char *alph, char *word, int n){
    if (n == strlen(word)) {
        if (f(word)) cout << cnt;
        cnt++;
        return;
    }
    for (int i = 0; i < strlen(alph); i++) {
        word[n] = alph[i];
        words(alph, word, n + 1);
    }
}

int main() {
    char alphabet[] = "ARTF", word[] = ".....";
    words(alphabet, word, 0);
}