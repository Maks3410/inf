#include <iostream>

using namespace std;
int cnt = 1;

void words(char *alph, char *word, int n){
    if (n == strlen(word)) {
        if (strcmp(word, "YAYAY") == 0) cout << cnt;
        cnt++;
        return;
    }
    for (int i = 0; i < strlen(alph); i++) {
        word[n] = alph[i];
        words(alph, word, n + 1);
    }
}

int main() {
    char alphabet[] = "AOY", word[] = ".....";
    words(alphabet, word, 0);
}