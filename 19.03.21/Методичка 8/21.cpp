#include <iostream>

using namespace std;
int cnt = 0;

void words(char *alph, char *word, int n){
    if (n == strlen(word)) {
        if (word[0] == 'L' || word[0] == 'T') cnt++;
        return;
    }
    for (int i = 0; i < strlen(alph); i++) {
        word[n] = alph[i];
        words(alph, word, n + 1);
    }
}

int main() {
    char alphabet[] = "LETO", word[] = "....";
    words(alphabet, word, 0);
    cout << cnt;
}