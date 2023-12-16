#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int qtdA, nMa, aEs = 0;
	double nota, nEs = 0.0;
	
	cin >> qtdA;
	
	for(int i = 0; i < qtdA; i++)
	{
		cin >> nMa >> nota;
		
		if(nota > nEs && nota >= 8)
		{
			aEs = nMa;
			nEs = nota;
		}
	}
	
	string res = nEs == 0? "Minimum note not reached" : to_string(aEs);
	
}
