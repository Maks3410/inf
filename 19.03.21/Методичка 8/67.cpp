#include <iostream>

using namespace std;
int cnt = 0;

bool f(char *word) {
    for (int i = 0; i * i < strlen(word); i++) {
        if (word[i] != word[strlen(word) - i - 1]) return false;
    }
    return true;
}

void words(char *alph, char *word, int n){
    if (n == strlen(word)) {
        if (f(word)) cnt++;
        return;
    }
    for (int i = 0; i < strlen(alph); i++) {
        word[n] = alph[i];
        words(alph, word, n + 1);
    }
}

int main() {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz", word[] = "......";
    words(alphabet, word, 0);
    cout << cnt;
}