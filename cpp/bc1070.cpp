#include <iostream>

using namespace std;

int main()
{
	int val, count = 0;
	
	cin >> val;
	
	while(count <= 5)
	{
		if(val % 2 != 0)
		{
			cout << val << endl;
			count++;
		}
		val++;
	}
}
