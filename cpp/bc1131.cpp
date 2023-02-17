#include <iostream>

using namespace std;

int main()
{
	int vIn, vGre, epa, nuG;
	
	vIn = vGre = epa = nuG = 0;
	
	while(true)
	{
		int fVal, sVal, opc;
		
		cin >> fVal >> sVal;
		
		if(fVal == sVal) epa++;
		else if(fVal > sVal) vIn++;
		else vGre++;
		
		nuG++;
		
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> opc;
		
		if(opc == 2) break;
	}
	
	cout << nuG << " grenais" << endl;
	cout << "Inter:" << vIn << "\nGremio:" << vGre << "\nEmpates:" << epa << endl;
	
	string vit = "";
	
	if(vIn == vGre) vit = "Nao houve vencedor";
	else if(vIn > vGre) vit = "Inter venceu mais";
	else vit = "Gremio venceu mais";
	
	cout << vit << endl;
}

