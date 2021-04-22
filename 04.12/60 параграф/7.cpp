#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int myRand(){
    return rand() % 6 + 1;

}

int main() {
    srand(time(NULL));
    cout << myRand() << endl << myRand();
}