#include <iostream>

using namespace std;

int main()
{
	int qAl, qGas, qDi, val;
	
	qAl = qGas = qDi = 0;
	
	while(true)
	{
		cin >> val;
		
		if(val == 4) break;
		else
		{
			switch(val)
			{
				case 1: qAl++; break;
				case 2: qGas++; break;
				case 3: qDi++; break;
			}
		}
	}
	
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << qAl << "\nGasolina: " << qGas << "\nDiesel: " << qDi << endl;
}
