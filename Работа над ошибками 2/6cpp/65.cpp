#include <iostream>
using namespace std;

int main(){
    int min_s;
    for (int s=45; s > 0; s--){
        int n = 1;
        int s1 = s;
        while( s1 <= 45 ) {
            s1 = s1 + 4;
            n = n * 2;
        }

        if (n == 256) min_s = s;
    }
    cout << min_s;
}