#include <iostream>

using namespace std;

int main()
{
	int dHor, dMin, hIni, mIni, hFin, mFin;
	
	cin >> hIni >> mIni >> hFin >> mFin;
	
	hFin < hIni || hFin == hIni? dHor = 24 + (hFin - hIni) : dHor = hFin - hIni;
	mFin < mIni || mFin == mIni? dMin = 60 + (mFin - mIni) : dMin = mFin - mIni;
	
	if(dMin == 60) dMin = 0;
	if(mIni - 60 > mFin - 60) dHor -= 1;
	if(dHor == 24 && dMin > 0) dHor = 0;
	
	cout << "O JOGO DUROU " << dHor << " HORA(S) E " << dMin << " MINUTO(S)" << endl; 
}
