#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double vec[12][12], sum = 0.0;
	int aux = 10, count = 1;
	char op;
	
	cin >> op;
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
			cin >> vec[i][j];
	}
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = count; j <= aux; j++)
			sum += vec[i][j];
		
		
		aux -= 1;
		count++;
	}
	
	if(op != 'S') sum /= 30.0;
	
	cout << fixed << setprecision(1) << sum << endl;
}
