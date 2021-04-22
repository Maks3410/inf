#include <iostream>

using namespace std;
int cnt = 0;

int count_letter( char letter, char *word);

bool f(char *word) {
    return ((count_letter(word[0], word) == 1) && (count_letter(word[1], word) == 1) &&
            (count_letter(word[2], word) == 1) && (count_letter(word[3], word) == 1) &&
            (count_letter('I', word) + count_letter('A', word) <= 1));
}

int count_letter( char letter, char *word) {
    int k = 0;
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == letter) k++;
    }
    return k;
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
    char alphabet[] = "PRIKAZ", word[] = "....";
    words(alphabet, word, 0);
    cout << cnt;
}