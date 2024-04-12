#include <iostream>

using namespace std;

int main()
{
	int valX, valM;
	
	for(;;)
	{
		cin >> valX >> valM;
		if(valX == 0 && valM == 0) break;
		else cout << valX*valM << endl;	
	} 	
}
