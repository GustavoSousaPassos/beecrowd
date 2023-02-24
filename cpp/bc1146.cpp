#include <iostream>

using namespace std;

int main()
{
	int val;
	
	while(true)
	{
		cin >> val;
		
		if(val == 0) break;
		else
		{
			for(int i = 1; i < val; i++)
				cout << i << " ";
			cout << val << endl;
		}
	}
}
