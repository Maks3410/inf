#include <iostream>
using namespace std;

int F(int n)
{
    if (n <= 3 ) return n;
    if (n > 3 && n % 2 == 0) return n + 3 + F(n - 1);
    return n * n + F(n - 2);

}


int main(){
    int k = 0;
    for (int n = 1; n <= 1000; n++) {
        if (F(n) % 7 == 0) {
            k++;
        }
    }
    cout << k;
}
