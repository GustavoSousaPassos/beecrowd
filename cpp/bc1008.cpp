#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int nFun, hTra;
	float salH, sal;
	
	cin >> nFun >> hTra >> salH;
	
	sal = salH * hTra;
	
	cout << "NUMBER = " << nFun << "\nSALARY = U$ " << fixed << setprecision(2) << sal << endl;
}
