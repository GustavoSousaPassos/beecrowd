#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string line, dodo, leo, pepper, msg, token;
	int res;
	
	while(getline(cin, line))
	{	
		istringstream iss(line);
		
		iss >> token;
		dodo = token;
		iss >> token;
		leo = token;
		iss >> token;
		pepper = token;
		
		res = -1;
		
		if(dodo == leo && leo == pepper) res = 0;
		
		switch(res)
		{
			case 0: msg = "Putz vei, o Leo ta demorando muito pra jogar..."; break;
			case 1: msg = "Os atributos dos monstros vao ser inteligencia, sabedoria..."; break;
			case 2: msg = "Iron Maiden's gonna get you, no matter how far!"; break;
			case 3: msg = "Urano perdeu algo muito precioso..."; break;
		}
		
		cout << msg << endl;
		
		cin.clear();
	}
}
