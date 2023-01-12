#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int fVal, sVal, tVal;
	
	cin >> fVal >> sVal >> tVal;
	
	int maiorAB = (fVal + sVal + abs(fVal-sVal)) / 2;
	
	maiorAB > tVal? cout << maiorAB << " eh o maior" << endl : cout << tVal << " eh o maior" << endl;
}
