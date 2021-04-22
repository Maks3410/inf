#include <iostream>
using namespace std;

int f(int a) {
    return a / 4;
}


int main(){
    int cnt[600]={0}, count=0;
    for (int i=20; i < 601; i++) {
        cnt[f(i)]++;
    }
    for (int i : cnt) {
        if (i) count++;}
    cout << count;
}