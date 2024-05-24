#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string cpf, token, del = ".-";
	vector<string> res;
	char ch;
	getline(cin, cpf);
	
	istringstream iss(cpf);
	
	while(iss.get(ch))
	{
		if(del.find(ch) != string::npos)
		{
			if(!token.empty())
			{
				res.push_back(token);
				token.clear();
			}
		}
		else
			token += ch;
	}
	
	if(!token.empty())
		res.push_back(token);
	
	for(int i = 0; i < 4; i++)
		cout << res[i] << endl;
}
