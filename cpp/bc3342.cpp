#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int val, cB, cP;
	
	cin >> val;
	
	cB = cP = (int) pow(val, 2) / 2;
	
	if(val % 2 != 0) cB++;
	
	cout << cB << " casas brancas e " << cP << " casas pretas" << endl;
}
