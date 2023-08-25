#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int count;
	string fVal, sVal;
	
	cin >> count;
	
	for(int i = 1; i <= count; i++)
	{
		int winner = 0;
		cin >> fVal >> sVal;
			
		if(fVal == sVal) winner = 0;
		else if(fVal == "tesoura")
		{
			if(sVal == "papel" || sVal == "lagarto") winner = 1;
			else winner = 2;
		}
		else if(fVal == "papel")
		{
			if(sVal == "pedra" || sVal == "Spock") winner = 1;
			else winner = 2;
		}
		else if(fVal =="pedra")
		{
			if(sVal == "tesoura" || sVal == "lagarto") winner = 1;
			else winner = 2;
		}
		else if(fVal =="lagarto")
		{
			if(sVal == "Spock" || sVal == "papel") winner = 1;
			else winner = 2;
		}
		else
		{
			if(sVal == "pedra" || sVal == "tesoura") winner = 1;
			else winner = 2;
		}
	
		string res = "";
		
		if(winner == 1) res = "Bazinga!";
		else if(winner == 2) res = "Raj trapaceou!";
		else res = "De novo!";
		
		cout << "Caso #" << i << ": " << res << endl;
	}
}
