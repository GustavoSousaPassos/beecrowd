#include <iostream>

using namespace std;

int main()
{
	int val, countP, countI, countPo, countN;
	countP = countI = countPo = countN = 0;
	
	for(int i = 0; i < 5; i++)
	{
		cin >> val;
		
		val % 2 == 0? countP++ : countI++;
		if(val > 0) countPo++;
		else if(val < 0) countN++;
	}
	
cout << countP << " valor(es) par(es)\n" << countI << " valor(es) impar(es)" << endl;
cout << countPo << " valor(es) positivo(s)\n" << countN << " valor(es) negativo(s)" << endl;
}
