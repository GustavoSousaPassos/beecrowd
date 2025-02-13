#include <iostream>

using namespace std;

int main()
{
	string res = "";
	int val;
	
	while(cin >> val)
	{
		if(val < 90 || val == 360) res = "Bom Dia!!";
		else if(val < 180) res = "Boa Tarde!!";
		else if(val < 270) res = "Boa Noite!!";
		else res = "De Madrugada!!";
		cout << res << endl;
	}
}
