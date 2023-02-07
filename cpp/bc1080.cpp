#include <iostream>

using namespace std;

int main()
{
	int bigger, pos = 1, val;
	
	cin >> bigger;
	
	for(int i = 2; i <= 100;i++)
	{
		cin >> val;
		
		if(val > bigger)
		{
			bigger = val;
			pos = i;
		}
	}
	
	cout << bigger << "\n" << pos << endl;
}
