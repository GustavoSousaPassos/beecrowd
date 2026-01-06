#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string fStr, sStr, tStr;
    
    getline(cin, fStr);
    getline(cin, sStr);
    getline(cin, tStr);
    
    cout << fStr << sStr << tStr << endl;
    cout << sStr << tStr << fStr << endl;
    cout << tStr << fStr << sStr << endl;
    cout << fStr.substr(0, 10) << sStr.substr(0, 10) << tStr.substr(0, 10) << endl;
}
