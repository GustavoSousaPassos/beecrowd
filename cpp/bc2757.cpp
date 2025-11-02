#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c;
    
    cin >> a >> b >> c;
    
    cout << "A = " << a << ", B = " << b << ", C = " << c << endl;
    cout << "A = " << setw(10) << a << ", B = " << setw(10) << b << ", C = " << setw(10) << c << endl;
    cout  << "A = " << setw(10) << setfill('0')  << internal << a << ", B = " << setw(10) << setfill('0') << internal << b << ", C = " << setw(10) << setfill('0') << internal << c  << endl;
    cout <<  "A = " << setw(10)  << setfill(' ') << left << a << ", B = "  << setw(10)  << setfill(' ') << left << b << ", C = " << setw(10)  << setfill(' ') << left << c << endl;

    return 0;
}
