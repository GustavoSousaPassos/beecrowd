#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double cVal[12][12], sum = 0.0;
	int col;
	char op;
	
	cin >> col >> op;
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
			cin >> cVal[i][j];
	}
	
	for(int i = 0; i < 12; i++)
		sum += cVal[i][col];
	
	if(op == 'S') cout << fixed << setprecision(1) << sum << endl;
	else cout << fixed << setprecision(1) << sum / 12.0 << endl;
}
