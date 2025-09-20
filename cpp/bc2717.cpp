#include <iostream>

using namespace std; 
 
int main() 
{
    int mRe, fGi, sGi;
    
    cin >> mRe >> fGi >> sGi;
    
    string res = fGi + sGi <= mRe? "Farei hoje!" : "Deixa para amanha!";
   
    cout << res << endl;
    return 0;
}
