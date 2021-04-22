#include <iostream>
using namespace std;

int F( int n )
{
    int sum = 0;
    sum += n + 1;
    if( n > 1 ) {
        sum += n + 5;
        sum += F(n-1);
        sum += F(n-2);
    }
    return sum;
}

int main(){
    int sum;
    for (int n = 0; n < 1000; n++) {
        sum = F(n);
        if (sum > 1000000) {
            cout << n << ' ' << sum;
            break;
        }
    }
}
