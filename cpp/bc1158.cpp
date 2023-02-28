#include <iostream>

using namespace std;

int main()
{
	int nCa, x, y;
	
	cin >> nCa;
	
	for(int i = 0; i < nCa; i++)
	{
		int count = 0, sum = 0;
		
		cin >> x >> y;
		
		while(count != y)
		{
			if(x % 2 != 0)
			{
				sum += x;
				count++;
			}
			x++;
		}
		
		cout << sum << endl;
	}
}
