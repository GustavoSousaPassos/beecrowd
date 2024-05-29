#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string line, token, nAl;
	int qtdL, sTo, qtA, tam;
	vector <string> vec;
	
	while(true)
	{
		sTo = 0;
		
		cin >> qtdL;
		cin.ignore();
		
		if(qtdL == 0) break;
		else
		{
		    for(int i = 0; i < qtdL; i++)
    		{    
    			getline(cin, line);
    			
    			istringstream iss(line);
    			
    			while(iss >> token)
    				vec.push_back(token);
    			
    			qtA = stoi(vec[0]);
    			tam = vec.size();
    			
    			for(int j = 1; j < tam; j++)
    			{
    			    nAl += vec[j];
    			    nAl += " ";
    			}
    			
    			cout << qtA <<" " << nAl << endl;
    			
    			vec.clear();
    			nAl.clear();
		    }
		}
	}
	
}
