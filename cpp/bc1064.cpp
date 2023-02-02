#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double sum, med, val;
	int count = 0;
	
	for(int i = 0; i < 6; i++)
	{
		cin >> val;
		
		if(val > 0)
		{
			count++;
			sum += val; 
		}
	}
	
	cout << count << " valores positivos\n" << fixed << setprecision(1) << sum / count << endl;
}


