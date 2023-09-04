#include<iostream>

using namespace std;

int main()
{
	int count, valB = 0, fVaG, sVaG;
	int fVaA, sVaA, fVaD, sVaD, fLv, sLv, bo;
	string res = "";
	
	cin >> count;
	
	for(int i = 0; i < count; i++)
	{
	    cin >> bo;
		cin >> fVaA >> fVaD >> fLv;
		cin >> sVaA >> sVaD >> sLv;
		
		valB = fLv % 2 == 0? bo : 0;
		
		fVaG = ((fVaA + fVaD) / 2) + valB;

		valB = sLv % 2 == 0? bo : 0;
		
		sVaG = ((sVaA + sVaD) / 2) + valB;
		
		if(fVaG > sVaG) res = "Dabriel";
		else if (fVaG < sVaG) res = "Guarte";
		else res = "Empate";
		
		cout << res << endl;
	}
}
