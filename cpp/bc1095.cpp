#include <iostream>

using namespace std;

int main()
{
	int i = 1, j = 60;
	
	do
	{
		cout << "I=" << i << " J=" << j << endl;
		i += 3;
		j -= 5;
	}
	while(j >= 0);
}
