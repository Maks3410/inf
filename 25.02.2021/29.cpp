#include <iostream>

using namespace std;

bool f1(bool x1, bool x2, bool x3, bool x4) {
    return (!x1 || x2) && (!x2 || x3) && (!x3 || x4);
}

bool f2(bool x, bool y, bool z) {
    return (x && y && z);
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
                                    for (int z1 = 0; z1 < 2; z1++)
                                        for (int z2 = 0; z2 < 2; z2++)
                                            for (int z3 = 0; z3 < 2; z3++)
                                                for (int z4 = 0; z4 < 2; z4++)
                                                            if (f1(x1, x2, x3, x4) &&
                                                                f1(y1, y2, y3, y4) &&
                                                                f1(z1, z2, z3, z4) &&
                                                                !f2(x1, y2, z3)
                                                            ) k++;
                                                            cout << k;
}
