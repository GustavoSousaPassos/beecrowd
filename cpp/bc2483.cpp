#include <iostream>

using namespace std;

int main()
{
	string res = "Feliz nat";
	int ind;
	
	cin >> ind;
	
	for(int i = 0; i < ind; i++)
		res += 'a';
	
	res += "l!";
	
	cout << res << endl;
}
