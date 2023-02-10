#include <iostream>

using namespace std;

int main()
{
	int i = 1, j = 7;
	
	for(;;)
	{
		if(j < 5)
		{
			j = 7;
			i += 2;
		}
		if(i > 9) break;
		
		cout << "I=" << i << " J=" << j << endl;
		j--;
	}
}
