#include <iostream>
using namespace std;

int main(){
    int max_s;
    for (int s=0; s < 46; s++){
        int n = 1;
        int s1 = s;
        while( s1 <= 45 ) {
            s1 = s1 + 4;
            n = n * 2;
        }

        if (n == 256) max_s = s;
    }
    cout << max_s;
}