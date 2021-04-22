#include <iostream>
using namespace std;

int main(){
    int min_s;
    for (int s=51; s > 0; s--){
        int n = 3;
        int s1 = s;
        while( s1 <= 51 ) {
            s1 = s1 + 7;
            n = n * 2;
        }
        if (n == 96) min_s = s;
    }
    cout << min_s;
}