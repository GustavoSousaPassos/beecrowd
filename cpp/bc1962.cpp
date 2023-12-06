#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int count, ano, resY;
	cin >> count;
	
	for(int i = 0; i < count; i++)
	{	
		cin >> ano;
		
		resY = abs(ano-2015);
		
		if(resY >= 2015)
		{
			resY++;
			cout << resY << " A.C." << endl;
		}
		else cout << resY << " D.C." << endl;
		
	}
}
