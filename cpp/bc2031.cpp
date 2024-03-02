#include <iostream>

using namespace std;

int main()
{
	string fPl, sPl, res;
	int count;
	
	cin >> count;
	
	for(int i = 0; i < count; i++)
	{
		
		cin >> fPl;
		cin >> sPl;
		
		if(fPl == "pedra")
		{
			if(sPl == "ataque") res = "Jogador 2 venceu";
			else if(sPl == "papel") res = "Jogador 1 venceu";
			else res = "Sem ganhador";
		}
		else if(fPl == "papel")
			sPl == "pedra" || sPl == "ataque"? res = "Jogador 2 venceu" : res ="Ambos venceram";
		else
			sPl == "pedra" || sPl == "papel"? res ="Jogador 1 venceu": res = "Aniquilacao mutua";
		
		cout << res << endl;
	}
	
}
