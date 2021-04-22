#include <iostream>
using namespace std;

int main(){
    int min_s;
    for (int s=94; s > 0; s--){
        int n = 1;
        int s1 = s;
        while( s1 < 94 ) {
            s1 = s1 + 8;
            n = n * 2;
        }
        if (n == 128) min_s = s;
    }
    cout << min_s;
}