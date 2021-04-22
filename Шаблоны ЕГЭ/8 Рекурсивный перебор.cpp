#include <iostream>

using namespace std;
int cnt = 0;

void words(char *alph, char *word, int n){
    if (n == strlen(word)) {
        puts(word);
        cnt++;
        return;
    }
    for (int i = 0; i < strlen(alph); i++) {
        word[n] = alph[i];
        words(alph, word, n + 1);
    }
}

int main() {
    char alphabet[] = "AECE", word[] = "......";
    words(alphabet, word, 0);
    cout << cnt;
}