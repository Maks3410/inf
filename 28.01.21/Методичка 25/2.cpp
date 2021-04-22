#include <iostream>
using namespace std;

int count_factors(int n) {
    int cnt = 2, i, del;
    for (i = 2; i * i < n; i++){
        if (n % i == 0) {cnt += 2; del = i;}
    }
    if (i * i == n) cnt++;
    if (cnt == 4)
        return del;
    return -1;

}

int main(){
    int del;
    for (int i = 102714; i <= 102725; i++){
        del = count_factors(i);
        if (del > 0) cout << "1 " << del << ' ' << i / del << ' ' << i << endl;
    }
}