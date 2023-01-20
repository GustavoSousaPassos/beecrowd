#include <iostream>

using namespace std;

int main()
{
	int fVal, sVal;
	
	cin >> fVal >> sVal;
	
	sVal % fVal == 0 || fVal % sVal == 0? cout << "Sao Multiplos" << endl : cout << "Nao sao Multiplos" << endl;
}
