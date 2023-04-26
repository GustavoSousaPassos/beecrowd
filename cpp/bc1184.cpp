#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double cVal[12][12], res = 0.0;
	char op;
	int pivo;
	
	cin >> op;
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
			cin >> cVal[i][j];
	}
	
	for(int i = 1; i < 12; i++)
	{
		for(int j = 0; j < pivo; j++)
			res += cVal[i][j];
			
		pivo = i + 1;
	}
	
	if(op != 'S') res /= 66.0;
	
	cout << fixed << setprecision(1) << res << endl; 
}
