#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int count, ano, resY;
	cin >> count;
	
	for(int i = 0; i < count; i++)
	{	
		cin >> ano;
		
		resY = 2015-ano;
		
		resY > 0? cout << resY << " D.C." << endl : cout << abs(resY)+1 << " A.C." << endl;
		
	}
}
