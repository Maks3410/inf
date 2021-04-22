#include <iostream>

using namespace std;

bool f1(bool x1, bool x2, bool x3) {
    return (x1 && x2) || (!x1 && !x2) || (x2 && x3) || (!x2 && !x3);
}

int main() {
    int k=0;
    for (int x1 = 0; x1 < 2; x1++)
        for (int x2 = 0; x2 < 2; x2++)
            for (int x3 = 0; x3 < 2; x3++)
                for (int x4 = 0; x4 < 2; x4++)
                    for (int x5 = 0; x5 < 2; x5++)
                        for (int x6 = 0; x6 < 2; x6++)
                            for (int x7 = 0; x7 < 2; x7++)
                                for (int x8 = 0; x8 < 2; x8++)
                                    for (int x9 = 0; x9 < 2; x9++)
                                        for (int x10 = 0; x10 < 2; x10++)
                                            if (
                                                    f1(x1, x2, x3) &&
                                                    f1(x2, x3, x4) &&
                                                    f1(x3, x4, x5) &&
                                                    f1(x4, x5, x6) &&
                                                    f1(x5, x6, x7) &&
                                                    f1(x6, x7, x8) &&
                                                    f1(x7, x8, x9) &&
                                                    f1(x8, x9, x10)
                                                    ) k++;
                                            cout << k;
}
