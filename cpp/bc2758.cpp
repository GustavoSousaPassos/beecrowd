#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float fVal, sVal;
    double tVal, qVal;
    
    cin >> fVal >> sVal >> tVal >> qVal;
    
    cout << fixed << setprecision(6) <<  "A = " << fVal << ", B = " << sVal << "\nC = " << tVal << ", D = " << qVal << endl;
    cout << fixed << setprecision(1) <<  "A = " << fVal << ", B = " << sVal << "\nC = " << tVal << ", D = " << qVal << endl;
    cout << fixed << setprecision(2) <<  "A = " << fVal << ", B = " << sVal << "\nC = " << tVal << ", D = " << qVal << endl;
    cout << fixed << setprecision(3) <<  "A = " << fVal << ", B = " << sVal << "\nC = " << tVal << ", D = " << qVal << endl;
    cout << scientific << uppercase <<  "A = " << fVal << ", B = " << sVal << "\nC = " << tVal << ", D = " << qVal << endl;
    cout << fixed << setprecision(0) <<  "A = " << fVal << ", B = " << sVal << "\nC = " << tVal << ", D = " << qVal << endl;
    
    return 0;
}
