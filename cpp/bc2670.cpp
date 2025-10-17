#include <iostream>

using namespace std;

int main()
{
	int pAn, sAn, tAn, fPAn, fSAn, fTAn;
	
	cin >> fPAn >> fSAn >> fTAn;
	
	pAn = (fSAn * 2) + (fTAn * 4);
	sAn = (fPAn * 2) + (fTAn * 2);
	tAn = (fPAn * 4) + (fSAn * 2);
	
	if(pAn < sAn && pAn < tAn) cout << pAn << endl;
	else if(sAn < pAn && sAn < tAn) cout << sAn << endl;
	else if(tAn < pAn && tAn < sAn) cout << tAn << endl;
	else cout << sAn << endl;
	
}
