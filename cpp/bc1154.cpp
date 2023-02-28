#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int sum = 0, i = 0, val;
	double res;
	
	while(true)
	{
		cin >> val;
		
		if(val < 0) break;
		else
		{
			sum += val;
			i++;
		}
	}
	
	res = (double) sum / i;
	
	cout << fixed << setprecision(2) << res << endl;
}
