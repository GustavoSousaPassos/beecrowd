#include <iostream>

using namespace std;

int main()
{
	int i = 1, j;
	
	for(int c = 7; c <= 15; c += 2)
	{
		j = c;
		
		for(int k = 0; k < 3; k++)
		{
			cout << "I=" << i << " J=" << j << endl;
			j--;
		}
		i += 2;
	}
}
