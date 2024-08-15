#include <iostream>

using namespace std;

int main()
{
	int h, z, l;
	string res = "";
	
	cin >> h >> z >> l;
	
	bool fVe, sVe;
	
	fVe = (h > z && h < l) || (h < z && h > l);
	sVe = (z > h && z < l) || (z < h && z > l);
	
	
	if(fVe == true) res += "huguinho";
	else if(sVe == true) res += "zezinho";
	else res += "luisinho";
	
	cout << res << endl;
}
