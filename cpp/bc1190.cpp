#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double vec[12][12], sum = 0.0;
	int val = 10;
	char op;
	
	cin >> op;
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
			cin >> vec[i][j];
	}
	
	for(int i = 1; i < 6; i++)
	{
		for(int j = 11; j != val; j--)
			sum += vec[i][j];
		val--;
	}
	
	for(int i = 6; i < 11; i++)
	{
		for(int j = i+1; j < 12; j++)
			sum += vec[i][j];
	}
	
	if(op != 'S') sum /= 30.0;
	
	cout << fixed << setprecision(1) << sum << endl;
}
