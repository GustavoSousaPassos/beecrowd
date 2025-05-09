#include <iostream>

using namespace std;

int main()
{
    int count, num, res;

    cin >> count;

    for(int i = 0; i < count; i++)
    {
        cin >> num;
        if(num != 1) res++;
    }

    cout << res << endl;
}