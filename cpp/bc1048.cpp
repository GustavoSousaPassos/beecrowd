#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float sal;
	int pRe;
	
	cin >> sal;
	
	if(sal <= 400.00) pRe = 15;
	else if(sal <= 800.00) pRe = 12;
	else if(sal <= 1200.00) pRe = 10;
	else if(sal <= 2000.00) pRe = 7;
	else pRe = 4;
	
	cout << "Novo salario: " << fixed << setprecision(2) << sal + (sal*pRe/100) << "\nReajuste ganho: " << sal*pRe/100 << endl;
	cout << "Em percentual: " << pRe << " %" << endl; 
}
