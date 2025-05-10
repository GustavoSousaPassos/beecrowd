#include <iostream>

using namespace std;

int main()
{
    int di, nCa, tCa;
    string res = "";

    cin >> di;

    for(int i = 0; i < di; i++)
    {
        cin >> nCa;

        for(int j = 0; j < nCa; j++)
        {
            cin >> tCa;

            switch(tCa)
            {
                case 1: res = "Rolien"; break;
                case 2: res = "Naej"; break;
                case 3: res = "Elehcim"; break;
                case 4: res = "Odranoel"; break;
            }
            cout << res << endl;
        }
    }
}