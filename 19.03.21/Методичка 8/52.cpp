#include <iostream>

using namespace std;
int cnt = 0;
bool f = false;

int count_a(char *word) {
    int k = 0;
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == 'A') k++;
    }
    return k;
}

void words(char *alph, char *word, int n){
    if (n == strlen(word)) {
        if (count_a(word) <= 3) cnt++;
        return;
    }
    for (int i = 0; i < strlen(alph); i++) {
        word[n] = alph[i];
        words(alph, word, n + 1);
    }
}

int main() {
    char alphabet[] = "AKMOR", word[] = "....";
    words(alphabet, word, 0);
    cout << cnt;
}