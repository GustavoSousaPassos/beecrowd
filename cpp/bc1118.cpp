#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int opc = 1;
	
	while(opc == 1)
	{
		float val, sum = 0.0;
		int i = 0;
		
		while(i != 2)
		{
			cin >> val;
			
			if(val >= 0.0 && val <= 10.0)
			{
				sum += val;
				i++;
			}
			else cout << "nota invalida" << endl;
		}
		
		cout << "media = " << fixed << setprecision(2) << sum / 2.0 << endl;
		
		for(;;)
		{
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> opc;
			
			if(opc == 1 || opc == 2) break;
		}
	}
}	
