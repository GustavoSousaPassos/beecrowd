#include <iostream>

using namespace std;

int main()
{
	int ddd;
	string res;
	
	cin >> ddd;
	
	switch(ddd)
	{
		case 11: res = "Sao Paulo"; break;
		case 19: res = "Campinas"; break;
		case 21: res = "Rio de Janeiro"; break;
		case 27: res = "Vitoria"; break;
		case 31: res = "Belo Horizonte"; break;
		case 32: res = "Juiz de Fora"; break;
		case 61: res = "Brasilia"; break;
		case 71: res = "Salvador"; break;
		default: res = "DDD nao cadastrado"; break;
	}
	
	cout << res << endl;
}
