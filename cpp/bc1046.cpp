#include <iostream>

using namespace std;

int main()
{
	int hIni, hFin, dur;
	
	cin >> hIni >> hFin;
	
	hFin < hIni || hFin == hIni? dur = 24 + (hFin - hIni) : dur = hFin - hIni;
	
	cout << "O JOGO DUROU " << dur << " HORA(S)" << endl;
}
