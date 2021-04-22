#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    ifstream Fin("26-5.txt");
    int S, N, x;

    Fin >> S >> N;
    vector <int> data(N);

    for( int i = 0; i < N; i++ )
        Fin >> data[i];

    sort( data.begin(), data.end() );

    int total = 0, count;
    for( count = 0; count < N; count++ ) {
        if( total + data[count] > S ) break;
        total += data[count];
    }

    int delta = S - total;
    int maxCandidate = 0;
    for( int i = count; i < N; i++ ) {
        if( data[i] - data[count] <= delta )
            if( data[i] > maxCandidate )
                maxCandidate = data[i];
    }

    cout << count << " " << maxCandidate;
}

