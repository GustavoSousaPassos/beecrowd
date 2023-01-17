#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int codL, qtd;
	float pre;
	
	cin >> codL >> qtd;
	
	switch(codL)
	{
		case 1: pre = 4.00*qtd; break;
		case 2: pre = 4.50*qtd; break;
		case 3: pre = 5.00*qtd; break;
		case 4: pre = 2.00*qtd; break;
		case 5: pre = 1.50*qtd; break;
	}
	
	cout << "Total: R$ " << fixed << setprecision(2) << pre << endl;
}
