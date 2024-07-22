#include <iostream>

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
		
		for(int j = 0; j < qtdN; j++)
		{
			for(int i = 0; i < qtdN; i++)
			{
				if(vec[i+1] > vec[i])
				{
					aux = vec[i];
					vec[i] = vec[i+1];
					vec[i+1] = aux;
				}
			}
		}
		
		
	}
}
