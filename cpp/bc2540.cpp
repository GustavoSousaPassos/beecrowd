#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int nPe, count, nVo, tVo;
	string line, token, res;
	
	while(cin >> nPe)
	{
	    cin.ignore();
	    
		int vec[nPe];
		count = nVo = 0;
	
		getline(cin, line);
		
		istringstream iss (line);
		
		while(iss >> token)
		{
			vec[count] = stoi(token);	
			count++;
		}
		
		for(int i = 0; i < nPe; i++)
		    if(vec[i] == 1) nVo++;
		    
		tVo = (int) ceil((nPe/3.0)*2);
		
		res = nVo >= tVo? "impeachment" : "acusacao arquivada";
		
		cout << res << endl;
	}
}
