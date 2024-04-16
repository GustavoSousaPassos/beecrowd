#include <iostream>

using namespace std;

int main()
{
	int count = 0, tam;
	string cVal;
	
	cin >> cVal;
	
	tam = cVal.length();
	
	for(int i = 0; i < tam; i++)
		if(cVal[i] == '1') count++;
		
	cVal += count % 2 == 0? '0' : '1';
	
	cout << cVal << endl;
}
