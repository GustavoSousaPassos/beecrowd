#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
	string cLe, cPos, token, res;
	vector<int> vec;
	int num, pos;
	
	while(cin >> cLe)
	{
	    res = "";
		cin >> num;
		cin.ignore();
		
		getline(cin, cPos);
		
		istringstream iss(cPos);
		
		while(iss >> token)
		{
			vec.push_back(stoi(token));	
		}
		
		for(int i = 0; i < num; i++)
		{
		    pos = vec[i] - 1;
		    res += cLe[pos];
		}

        cout << res << endl;
        
        vec.clear();
	}
}
