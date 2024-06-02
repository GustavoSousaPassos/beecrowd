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
    			
    			for(int j = 1; j < tam-1; j++)
    			{
    			    nAl += vec[j];
    			    nAl += " ";
    			}
    			nAl += vec[tam-1];
    			
    			
    			if(nAl == "suco de laranja") sTo += 120*qtA;
    			else if(nAl == "laranja") sTo += 50*qtA;
    			else if(nAl == "morango fresco") sTo += 85*qtA;
    			else if(nAl == "mamao") sTo += 85*qtA;
    			else if(nAl == "goiaba vermelha") sTo += 70*qtA;
    			else if(nAl == "manga") sTo += 56*qtA;
    			else if(nAl == "brocolis") sTo += 34*qtA;
    			
    			vec.clear();
    			nAl.clear();
		    }
		    if(sTo < 110) cout << "Mais " << 110-sTo << " mg" << endl;
			else if(sTo > 130) cout << "Menos " << sTo-130 << " mg" << endl;
			else cout << sTo << " mg" << endl;
			
		    
		}
	}
	
}
