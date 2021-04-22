#include <iostream>

using namespace std;

bool f(bool x1, bool x2, bool x3, bool x4, bool y1, bool y2) {
    return !((x1 && x2) || (x1 || x3) && (x1 || y1)) &&
            ((x2 && x3) || (x2 || x4) && (x2 || y2));
}

int main() {
    int k=0;
    for (int x1 = 0; x1 < 2; x1++)
        for (int x2 = 0; x2 < 2; x2++)
            for (int x3 = 0; x3 < 2; x3++)
                for (int x4 = 0; x4 < 2; x4++)
                    for (int x5 = 0; x5 < 2; x5++)
                        for (int x6 = 0; x6 < 2; x6++)
                            for (int y1 = 0; y1 < 2; y1++)
                                for (int y2 = 0; y2 < 2; y2++)
                                    for (int y3 = 0; y3 < 2; y3++)
                                        for (int y4 = 0; y4 < 2; y4++)
                                            for (int y5 = 0; y5 < 2; y5++)
                                                for (int y6 = 0; y6 < 2; y6++)
                                                    for (int x7 =0; x7 < 2; x7++)
                                                        for (int x8 = 0; x8 < 2; x8++)
                                                            if (f(x1, x2, x3, x4, y1, y2) &&
                                                                f(x3, x4, x5, x6, y3, y4) &&
                                                                f(x5, x6, x7, x8, y5, y6)
                                                            ) k++;
                                                            cout << k;
}
