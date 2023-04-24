#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double cVal[12][12], sum = 0.0;
	char op;
	
	cin >> op;
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
			cin >> cVal[i][j];
	}
	
	for(int i = 0; i < 12; i++)
	{
		int pivo = i + 1;
		
		for(int j = pivo; j < 12; j++)
			sum += cVal[i][j];
	}
	
	if(op == 'S') cout << fixed << setprecision(1) << sum << endl;
	else cout << fixed << setprecision(1) << sum/66.0 << endl;
}
