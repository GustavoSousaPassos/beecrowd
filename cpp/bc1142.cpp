#include <iostream>

using namespace std;

int main()
{
	int li, j = 1;
	
	cin >> li;
	
	for(int i = 0; i < li; i++)
	{
		int k = 0;
		
		while(k != 4)
		{
			if(j % 4 == 0) cout << "PUM" << endl;
			else cout << j << " ";
			
			j++;
			k++;
		}
	}
}
