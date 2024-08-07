#include <iostream>

using namespace std;

int main()
{
	int nCa, val;
	
	cin >> nCa;
	
	for(int i = 0; i < nCa; i++)
	{
		cin >> val;
		cout << "resposta " << i+1 << ": " << val << endl;
	}
}
