#include <iostream>

using namespace std;

int main()
{
	int val, som, count;
	
	for(;;)
	{
		som = 0;
		
		cin >> val;
		
		if(val == 0) break;
		else
		{
			count = 0;
			
			while(true)
			{
				if(val % 2 == 0)
				{
					som += val;
					count++;
				}
				if(count == 5) break;
				else val++;
			}
			cout << som << endl;
		}
	}
}
