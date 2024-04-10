#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	string li;
	int count, res = 0;
	
	cin >> count;
	
	cin.ignore();           // Limpar o buffer da memoria
	
	vector<int> vec;
	
	getline(cin, li);
	
	istringstream iss(li);
	
	string token;
	
	while(iss >> token)
		vec.push_back(stoi(token));
		
    for(int i = 0; i < vec.size()- 1; ++i)
    {
    	if(vec[i] > vec[i+1])
    	{
    		res = i + 2;
    		break;
		}
	}
	
	cout << res << endl;
}
