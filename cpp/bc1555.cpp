#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y, count;
    double ra, be, ca;
    string res = "";

    cin >> count;
    
    for(int i = 0; i  < count; i++)
    {
        cin >> x >> y;

        ra = pow(3*x, 2) + pow(y, 2);
        be = (2 * pow(x, 2)) +  pow(5*y, 2);
        ca = -100*x + pow(y, 3);

        if(ra > be && ra > ca) res = "Rafael ganhou";
        else if(be > ra && be > ca) res = "Beto ganhou";
        else res = "Carlos ganhou";

        cout << res << endl;
    }
}