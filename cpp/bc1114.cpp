#include <iostream>

using namespace std;

int main()
{
	int senha = 2002, inS;
	
	for(;;)
	{
		cin >> inS;
		
		if(inS == senha)
		{
			cout << "Acesso Permitido" << endl;
			break;
		}
		else cout << "Senha Invalida" << endl;
	}
}
