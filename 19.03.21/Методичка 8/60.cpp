#include <iostream>

using namespace std;
int cnt = 0;

bool f(char *word) {
    int l = int(strlen(word)) - 1;
    if (!((word[0] == 'E' || word[0] == 'Y' || word[0] == 'U') && (word[l] == 'E' || word[l] == 'Y' || word[l] == 'U'))) return false;
    for (int i = 1; i < l; i++) {
        if (word[i] == 'E' || word[i] == 'Y' || word[i] == 'U') return false;
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
    char alphabet[] = "ABVGEUY", word[] = ".....";
    words(alphabet, word, 0);
    cout << cnt;
}