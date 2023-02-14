#include <iostream>

using namespace std;

int main()
{
	int i = 0, x, y;
	string msg = "";
	
	while(true)
	{
		cin >> x >> y;
		
		if(x == y) break;
		else if(x > y) msg = "Decrescente";
		else msg = "Crescente";
		
		cout << msg << endl;
	}
}
