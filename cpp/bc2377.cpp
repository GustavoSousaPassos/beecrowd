#include<iostream>

using namespace std;

int main()
{
    int nPe, kTo, dPe, vKi, vPe;
    
    cin >> kTo >> dPe >> vKi >> vPe;
    
    nPe = kTo / dPe;
    
    cout << kTo*vKi + nPe*vPe << endl;
}
