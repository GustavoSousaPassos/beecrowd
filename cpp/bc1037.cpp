#include <iostream>

using namespace std;

int main()
{
	float val;
	string me = "";
	
	cin >> val;
	
	if(val < 0 || val > 100.00) me = "Fora de intervalo";
	else if(val <= 25.00) me = "Intervalo [0,25]";
	else if(val <= 50.00) me = "Intervalo (25,50]";
	else if(val <= 75.00) me = "Intervalo (50,75]";
	else me = "Intervalo (75,100]";
	
	cout << me << endl;
}
