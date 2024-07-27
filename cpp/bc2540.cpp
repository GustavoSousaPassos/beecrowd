#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int nPe, count;
	string line, token;
	
	while(cin >> nPe)
	{
		int vec[nPe];
		getline(cin, line);
		
		istringstream iss (line);
		
		count = 0;
		
		while(iss >> token)
		{
			vec[count] = atoi(token);	
			count++;
		}
	}
}
