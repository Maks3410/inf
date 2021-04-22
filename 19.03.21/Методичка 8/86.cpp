#include <iostream>

using namespace std;
int cnt = 1;
int ans = 0;

bool f(char *word) {
    int f[2] = {0};
    for (int i = 0; i < strlen(word); i++){
        if (word[i] == 'O') f[0]++;
        if (word[i] == 'E') f[1]++;
    }
    return (f[0] == 1 && f[1] == 1);
}

void words(char *alph, char *word, int n){
    if (n == strlen(word)) {
        if (f(word)) ans = cnt;
        cnt++;
        return;
    }
    for (int i = 0; i < strlen(alph); i++) {
        word[n] = alph[i];
        words(alph, word, n + 1);
    }
}

int main() {
    char alphabet[] = "BEKHO", word[] = ".....";
    words(alphabet, word, 0);
    cout << ans;
}