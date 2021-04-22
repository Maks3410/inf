#include <iostream>
using namespace std;

int F(int n)
{
    int last = 0;
    last = n;
    if (n){
        int d = n % 10 +
                F(n/10);
        last = d;
        return d;
    }
    else return last;
}


int main(){
    int last;
    for (int n = 0; n < 10000; n++) {
        last = F(n);
        if (last > 32) {
            cout << n << ' ' << last;
            break;
        }
    }
}
