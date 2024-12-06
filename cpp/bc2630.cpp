#include <iostream>

using namespace std;

int main()
{
	string opc;
	int r, g, b, nCa, res;
	
	cin >> nCa;
	cin.ignore();

	for(int i = 0; i < nCa; i++)
	{
		getline(cin, opc);
		
		cin >> r >> g >> b;
		cin.ignore();
		
		if(opc == "mean") res = (r + b + g) / 3;
		else if(opc == "eye") res = 0.3*r + 0.59*g + 0.11*b;
		else if(opc == "min")
		{
			if(r < g && r < b) res = r;
			else if(g < r && g < b) res = g;
			else if(b < r && b < g) res = b;
			else res = r;
		}
		else if(opc == "max")
		{
			if(r > g && r > b) res = r;
			else if(g > r && g > b) res = g;
			else if(b > r && b > g) res = b;
			else res = r;
		}
		
		cout << "Caso #" << i+1 << ": " << res << endl;
		
	}	
}
