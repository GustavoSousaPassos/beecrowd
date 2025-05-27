#include <iostream>

using namespace std;

int main()
{
    int count, nCo, nLa, tCo = 0;

    cin >> count;

    for(int i = 0; i < count; i++)
    {
        cin >> nLa >> nCo;
        if(nCo < nLa) tCo += nCo;
    }
    cout << tCo << endl;
}