#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float cVal[3], aux;
	
	cin >> cVal[0] >> cVal[1] >> cVal[2];
	
	while(true)
	{
		if(cVal[1] < cVal[2])
		{
			aux = cVal[1];
			cVal[1] = cVal[2];
			cVal[2] = aux;
		}
		else if(cVal[1] > cVal[0])
		{
			aux = cVal[1];
			cVal[1] = cVal[0];
			cVal[0] = aux;
		}
		else break;
		
	}
	
	if(cVal[0] >= cVal[1] + cVal[2]) cout << "NAO FORMA TRIANGULO" << endl;
	else
	{
		float fVer = pow(cVal[0], 2);
		float sVer = pow(cVal[1], 2) + pow(cVal[2], 2);
		
		if(fVer == sVer) cout << "TRIANGULO RETANGULO" << endl;
		else if(fVer > sVer) cout << "TRIANGULO OBTUSANGULO" << endl;
		else if(fVer < sVer) cout << "TRIANGULO ACUTANGULO" << endl;
		
		if(cVal[0] == cVal[1] && cVal[1] == cVal[2]) cout << "TRIANGULO EQUILATERO" << endl;
		else if((cVal[0] == cVal[1] && cVal[1] != cVal[2]) || (cVal[0] != cVal[1] && cVal[1] == cVal[2])) cout << "TRIANGULO ISOSCELES" << endl;
	}
}
