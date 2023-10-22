#include <iostream>

using namespace std;

int main()
{
	int count, val, res;
	
	cin >> count;

	for(int i = 0; i < count; i++)
	{
		cin >> val;
		
		res = val % 2 == 0? 0 : 1;
		cout << res << endl;
	}
}
