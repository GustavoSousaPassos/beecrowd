#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    double res;
    
    cin >> num;
    
    res = num / log(num);
    
    cout << fixed << setprecision(1) << res << " " << 1.25506*res;
}
