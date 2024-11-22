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
		else
		{
			if((dodo == "tesoura" && leo == "papel" && pepper == "papel") ||
			(dodo == "pedra" && leo == "tesoura" && pepper == "tesoura") ||
			(dodo == "papel" && leo == "pedra" && pepper == "pedra")) res = 1;
			else if((leo == "tesoura" && dodo == "papel" && pepper == "papel") ||
			(leo == "pedra" && dodo == "tesoura" && pepper == "tesoura") ||
			(leo == "papel" && dodo == "pedra" && pepper == "pedra")) res = 2;
			else if((pepper == "tesoura" && leo == "papel" && dodo == "papel") ||
			(pepper == "pedra" && leo == "tesoura" && dodo == "tesoura") ||
			(pepper == "papel" && leo == "pedra" && dodo == "pedra")) res = 3;
			else res = 0;
		}
		
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
