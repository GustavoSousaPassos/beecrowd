#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int sA, bA, aA, tS, tB, tA, count;
	string name;
	
	sA = bA = aA = tS = tB = tA = 0;
	
	cin >> count;
	
	for(int i = 0; i < count; i++)
	{
		int fVal, sVal, tVal, r, s, t;
		
		cin >> name;
		cin >> fVal >> sVal >> tVal;
		
		tS += fVal;
		tB += sVal;
		tA += tVal;
		
		cin >> r >> s >> t;
		
		sA += r;
		bA += s;
		aA += t;
	}
	
	double pS, pB, pA;
	
	pS = ((double)sA / tS) * 100.0;
	pB = ((double)bA / tB) * 100.0;
	pA = ((double)aA / tA) * 100.0;
	
	//cout << "Pontos de Saque: " << fixed << setprecision(2) <<  pS << " %." << endl;
	printf("Pontos de Saque: %.2f %%.\n", pS);
	printf("Pontos de Bloqueio: %.2f %%.\n", pB);
	printf("Pontos de Ataque: %.2f %%.\n", pA);
	//cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << pB << " %." << endl; 
	//cout << "Pontos de Ataque: " << fixed << setprecision(2) << pA << " %." << endl;
}
