#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int fPe, sPe, nCa, j;
	
	cin >> nCa;
	cin.ignore();
	
	for(int i = 0; i < nCa; i++)
	{	
		string name, cVal[4];
		
		j = 0;
		
		getline(cin , name);
		cin >> fPe >> sPe;
		
		istringstream stream(name);
			
		string pal;
		
		while(stream >> pal)
		{
			cVal[j] = pal;
			j++;
		}
		
		((fPe + sPe) % 2) == 0? cout << cVal[0] << endl : cout << cVal[2] << endl;
	}
}
