#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int li;
	float res = 0.0, ma[12][12];
	char op;
	
	cin >> li >> op;
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
			cin >> ma[i][j];
	}
	
	for(int k = 0; k < 12; k++)
		res += ma[li][k];
	if(op == 'm' || op == 'M') res = res / 12.0;
	
	cout << fixed << setprecision(1) << res << endl;
}
