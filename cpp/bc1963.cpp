#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double fPri, sPri, agree;
	
	cin >> fPri >> sPri;
	
	agree = fabs((fPri - sPri) / fPri * 100.0);
	
	cout << fixed << setprecision(2) << agree << "%" << endl;
}
