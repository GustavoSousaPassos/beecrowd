#include <iostream>

using namespace std;

int main()
{
	int fVal, sVal, tVal, foVal;
	
	cin >> fVal >> sVal >> tVal >> foVal;
	
	bool fVe = sVal > tVal && foVal > fVal;
	bool sVe = tVal + foVal > fVal + sVal;
	bool tVe = (tVal > 0 && foVal > 0) == (fVal % 2 == 0);
	
	if(fVe == true && sVe == true && tVe == true) cout << "Valores aceitos" << endl;
	else cout << "Valores nao aceitos" << endl;
}
