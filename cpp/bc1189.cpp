#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double cVal[12][12], sum = 0.0;
	int lPos = 5;
	char op;
	
	cin >> op;
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
			cin >> cVal[i][j];
	}
	
	for(int i = 1; i < 6; i++)
	{
		for(int j = 0; j < i; j++)
			sum += cVal[i][j];
	}
	for(int i = 6; i < 11; i++)
	{
		for(int j = 0; j < lPos; j++)
			sum += cVal[i][j];
		
		lPos--;
	}
	
	if(op != 'S') sum /= 30.0;
	
	cout << fixed << setprecision(1) << sum << endl;
}
