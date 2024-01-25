#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int fVal, qtd, nPe;
	float total = 0.0;
	
	cin >> nPe;
	
	for(int i = 0; i < nPe; i++)
	{
		cin >> fVal >> qtd;
		
		switch(fVal)
		{
			case 1001: total += qtd*1.50; break;
			case 1002: total += qtd*2.50; break;
			case 1003: total += qtd*3.50; break;
			case 1004: total += qtd*4.50; break;
			case 1005: total += qtd*5.50; break;
		}
	}
	
	cout << fixed << setprecision(2) << total << endl;
}
