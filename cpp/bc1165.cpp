#include <iostream>

using namespace std;

int main()
{
	int count, val;
	
	cin >> count;
	
	for(int i = 0; i < count; i++)
	{
		int cNu = 0;
		
		cin >> val;
		
		for(int j = 1; j <= val; j++)
			if(val % j == 0) cNu++;
		
		cNu == 2? cout << val << " eh primo" << endl : cout << val << " nao eh primo" << endl;
	}
}
