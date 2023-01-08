#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float pNota, sNota, tNota, me;
	
	cin >> pNota >> sNota >> tNota;
	
	me = (pNota*2 + sNota*3 + tNota*5) / 10.0;
	
	cout << "MEDIA  = " << fixed << setprecision(1) << me << endl;
}
