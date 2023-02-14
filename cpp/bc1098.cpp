#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float i = 0.0, j = 1.0;
	
	for(int c  = 0; c < 3; c++)
	{
		cout << "I=" << fixed << setprecision(0) << i << " J=" << j << endl;
		j++;
	}
	
	i += 0.2;
	j = 1.0;
	j += 0.2;
	
	for(int c = 0; c < 9; c++)
	{
		for(int d = 0; d < 3; d++)
		{
			if(i == 1.0 || i == 2.0) cout << "I=" << fixed << setprecision(0) << i << " J=" << j << endl;
			else cout << "I=" << fixed << setprecision(1) << i << " J=" << j << endl;
			j++;		
		}
		
		i += 0.2;
		j -= 3;
		j += 0.2;
	}
	
	for(int c = 0; c < 3; c++)
	{
		cout << "I=" << fixed << setprecision(0) << i << " J=" << j << endl;
		j++;
	}
}
