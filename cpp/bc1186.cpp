#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double cVal[12][12], sum = 0.0;
	int sPoint = 11;
	char op;
	
	cin >> op;
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
			cin >> cVal[i][j];
	}
	
	for(int i = 0; i < 12; i++)
	{
		int pivo = sPoint + 1;
		
		for(int j = pivo; j < 12; j++)
			sum += cVal[i][j];
		sPoint--;
	}
	
	if(op != 'S') sum /= 66.0;
	
	cout << fixed << setprecision(1) << sum << endl;
}
