#include <iostream>

using namespace std;

int main()
{
	int n100, n50, n20, n10, n5, n2, n1;
	float valIn, valO;
	
	n100 = n50 = n20 = n10 = n5 = n2 = n1 = 0;
	
	cin >> valIn;
	
	valO = valIn;
	bool ver = true;
	
	while(ver == true)
	{
		if(valO >= 100.00)
		{
			n100++;
			valO -= 100.00;
		}
		else if(valO >= 50.00)
		{
			n50++;
			valO -= 50.00;
		}
		else if(valO >= 20.00)
		{
			n20++;
			valO -= 20.00;
		}
		else if(valO >= 10.00)
		{
			n10++;
			valO -= 10.00;
		}
		else if(valO >= 5.00)
		{
			n5++;
			valO -= 5.00;
		}
		else if(valO >= 2.00)
		{
			n2++;
			valO -= 2.00;
		}
		else if(valO >= 1.00)
		{
			n1++;
			valO -= 1.00;
		}
		else break;
	}
	
	cout << valIn << endl;
	cout << n100 << " nota(s) de R$ 100,00" << endl;
	cout << n50 << " nota(s) de R$ 50.,00" << endl;
	cout << n20 << " nota(s) de R$ 20,00" << endl;
	cout << n10 << " nota(s) de R$ 10.00" << endl;
	cout << n5 << " nota(s) de R$ 5.00" << endl;
	cout << n2 << " nota(s) de R$ 2.00" << endl;
	cout << n1 << " nota(s) de R$ 1.00" << endl;
}
