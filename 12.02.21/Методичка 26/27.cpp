#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    ifstream Fin("26-J2.txt");
    int S, N, mediana, middle = 0, k = 0;

    Fin >> S >> N;
    vector <int> data(N);

    for( int i = 0; i < N; i++ )
        Fin >> data[i];

    sort( data.begin(), data.end() );

    mediana = data[N / 2];

    for (int i = 0; i < N; i++) {
        middle += data[i];
    }

    middle /= N;

    for (int i = 0; i < N; i++) {
        if ((data[i] >= middle && data[i] <= mediana) || (data[i] <= middle && data[i] >= mediana)) k++;
    }
    cout << k;
}

