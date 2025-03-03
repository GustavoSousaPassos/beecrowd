#include <iostream>

using namespace std;

int main()
{
	int qRe[3], sPa[3], res = 0;
	
	cin >> qRe[0] >> qRe[1] >> qRe[2];
	cin >> sPa[0] >> sPa[1] >> sPa[2];
	
	for(int i = 0; i < 3; i++)
		if(qRe[i] < sPa[i]) res += sPa[i] - qRe[i];
	
	cout << res << endl;
}
