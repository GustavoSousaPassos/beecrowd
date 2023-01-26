#include <iostream>

using namespace std;

int main()
{
	int count = 0;
	
	for(int i = 0; i <= 5; i++)
	{
		float val;
		cin >> val;
		if(val > 0) count++;
	}
	
	cout << count << " valores positivos" << endl;
}
