#include <iostream>

using namespace std;

int main()
{
    int count, qRe, res;

    cin >> count;

    for(int i = 0; i < count; i++)
    {
        cin >> qRe;
        res = 1+(qRe*(qRe+1) / 2);
        cout << res << endl;
    }
}