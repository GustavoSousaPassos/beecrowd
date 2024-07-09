#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
	string cLe, cPos, token;
	vector<int> vec;
	int num;
	
	while(cin >> cLe)
	{
		cin >> num;
		cin.ignore();
		
		getline(cin, cPos);
		
		istringstream iss(cPos);
		
		while(iss >> token)
		{
			vec.push_back(stoi(token));	
		}
	}
}
