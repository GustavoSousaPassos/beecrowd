#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int qtdN, vNo, nCh, aux;
	
	while (cin >> qtdN >> nCh)
	{
		int vec[qtdN];
		
		for(int i = 0; i < qtdN; i++)
		{
			cin >> vNo;
			vec[i] = vNo;
		}
		
		sort(vec, vec + qtdN, greater<int>());
		
		for(int i = 0; i < nCh; i++)
		{
			cin >> vNo;
			cout << vec[vNo-1] << endl;
		}
		
	}
}
