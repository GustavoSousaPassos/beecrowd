#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	string name;
	double salF, tVen, tSal;
	
	cin >> name;
	cin >> salF >> tVen;
	
	tSal = (tVen*0.15) + salF;
	
	cout << "TOTAL = R$ " << fixed << setprecision(2) << tSal << endl;
}
