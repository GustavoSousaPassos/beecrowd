#include <iostream>

using namespace std;

int main()
{
	int x, y;
	string msg = "";
	
	while(true)
	{
		cin >> x >> y;
		
		if(x == 0 || y == 0) break;
		else
		{
			if(x > 0 && y > 0) msg = "primeiro";
			else if(x < 0 && y > 0) msg = "segundo";
			else if(x < 0 && y < 0) msg = "terceiro";
			else msg = "quarto";
		}
		cout << msg << endl;
	}
}

