#include <iostream>
using namespace std;

int f(int a) {
    int ans=0, k = 0;
    while (a) {
        if (a % 2) {
        ans += pow(2, k);
        k++;
        }
        a /= 2;
    }
    return ans;
}


int main(){
    int cnt[2500]={0}, count=0;
    for (int i=10; i < 2501; i++) {
        cnt[f(i)]++;
    }
    for (int i : cnt) {
        if (i) count++;}
    cout << count;
}