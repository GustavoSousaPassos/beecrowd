#include <iostream>

using namespace std;

int main()
{
	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;
	int m1 = 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m01 = 0;
	float valIn;
	
	cin >> valIn;
	
	while(valIn != 0)
	{
		if(valIn >= 100.00)
		{
			n100++;
			valIn -= 100.00;	
		}	
		else if(valIn >= 50.00)
		{
			n50++;
			valIn -= 50.00;
		}
		else if(valIn >= 20.00)
		{
			n20++;
			valIn -= 20.00;
		}
		else if(valIn >= 10.00)
		{
			n10++;
			valIn -= 10.00;
		}
		else if(valIn >= 5.00)
		{
			n5++;
			valIn -= 5.00;
		}
		else if(valIn >= 2.00)
		{
			n2++;
			valIn -= 2.00;
		}
		else if(valIn >= 1.00)
		{
			m1++;
			valIn -= 1.00;
		}
		else if(valIn >= 0.50)
		{
			m50++;
			valIn -= 0.50;
		}
		else if(valIn >= 0.25)
		{
			m25++;
			valIn -= 0.25;
		}
		else if(valIn >= 0.10)
		{
			m10++;
			valIn -= 0.10;
		}
		else if(valIn >= 0.05)
		{
			m5++;
			valIn -= 0.05;
		}
		else if(valIn >= 0.01 || valIn >= 0.001)
		{
			m01++;
			valIn -= 0.01;
		}
		else break;
	}
	
	cout << "NOTAS:" << endl;
	cout << n100 << " nota(s) de R$ 100.00" << endl;
	cout << n50 << " nota(s) de R$ 50.00" << endl;
	cout << n20 << " nota(s) de R$ 20.00" << endl;
	cout << n10 << " nota(s) de R$ 10.00" << endl;
	cout << n5 << " nota(s) de R$ 5.00" << endl;
	cout << n2 << " nota(s) de R$ 2.00" << endl;
	cout << "MOEDAS:" << endl;
	cout << m1 << " moeda(s) de R$ 1.00" << endl;
	cout << m50 << " moeda(s) de R$ 0.50" << endl;
	cout << m25 << " moeda(s) de R$ 0.25" << endl;
	cout << m10 << " moeda(s) de R$ 0.10" << endl;
	cout << m5 << " moeda(s) de R$ 0.05" << endl;
	cout << m01 << " moeda(s) de R$ 0.01" << endl;	
}
