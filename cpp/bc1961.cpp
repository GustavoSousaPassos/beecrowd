#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int aPu, qPu, i = 0;
	string res = "YOU WIN", sVa, token;
	
	cin >> aPu >> qPu;
	
	cin.ignore();
	
	int sPu[qPu*2];
	
	getline(cin, sVa);
	
	stringstream ss(sVa);
	
	while(ss >> token)
	{
	    sPu[i] = stoi(token);
	    i++;
	}
	
	for(int j = 0; j < qPu-1; j++)
	{
	    if(abs(sPu[j] - sPu[j+1]) > aPu)
	    {
	        res = "GAME OVER";
	        break;
	    }
	}
	
	cout << res << endl;
}
