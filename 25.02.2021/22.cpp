#include <iostream>

using namespace std;

bool f1(bool x1, bool x2, bool x3, bool x4) {
    return (!x1 || x2) && (!x2 || x3) && (!x3 || x4);
}

bool f2(bool x1, bool x2, bool x3, bool x4, bool y1, bool y2, bool y3, bool y4) {
    return (!y1 || x1) && (!y2 || x2) && (!y3 || x3) && (!y4 || x4) ;
}

int main() {
    int k=0;
    for (int x1 = 0; x1 < 2; x1++)
        for (int x2 = 0; x2 < 2; x2++)
            for (int x3 = 0; x3 < 2; x3++)
                for (int x4 = 0; x4 < 2; x4++)
                    for (int y1 = 0; y1 < 2; y1++)
                        for (int y2 = 0; y2 < 2; y2++)
                            for (int y3 = 0; y3 < 2; y3++)
                                for (int y4 = 0; y4 < 2; y4++)
                                    if (
                                            f1(x1, x2, x3, x4) &&
                                            f1(y1, y2, y3, y4) &&
                                            f2(x1,  x2,  x3,  x4,  y1,  y2,  y3,  y4)
                                            ) k++;
                                    cout << k;
}
