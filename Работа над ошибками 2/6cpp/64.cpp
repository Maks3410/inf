#include <iostream>
using namespace std;

int main(){
    int max_s;
    for (int s=0; s < 94; s++){
        int n = 1;
        int s1 = s;
        while( s1 < 94 ) {
            s1 = s1 + 8;
            n = n * 2;
        }
        if (n == 128) max_s = s;
    }
    cout << max_s;
}