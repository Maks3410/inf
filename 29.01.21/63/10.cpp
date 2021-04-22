#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

bool prime(int n){
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    const int N = 10;
    int a[N], b[N], j = 0;

    srand(time(NULL));

    for (int & i : a) {
        i = rand() % 10 + 1;
    }

    for (int i : a)
        cout << i << ' ';

    cout << endl;

    for (int i : a) {
        if (prime(i)) {b[j] = i; j++;}
    }

    for (int i = 0; i < j; i++)
        cout << b[i] << ' ';

}