#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	float med, res, biggest, smallest;
	vector <float> vec;
	int nCa;
	string name, line, token;
	
	cin >> nCa;
	cin.ignore();
	 
	for(int i = 0; i < nCa; i++)
	{
		res = 0;
		
		cin >> name;
		cin >> med;
		
		cin.ignore();
		getline(cin, line);
		
		istringstream iss(line);
		
		while(iss >> token)
			vec.push_back(stof(token));
		
		int tam = vec.size();
		biggest = vec[0];
		smallest = biggest;
		
		for(int j = 0; j < tam; j++)
		{
    	     if(vec[j] > biggest) biggest = vec[j];
    	     if(vec[j] < smallest) smallest = vec[j];
    	}
    	
    	for(int k = 0; k < tam; k++)
    	    res += vec[k];
    	   
    	res = (res - biggest - smallest) * med;
    	
		cout << name << " " << fixed << setprecision(2) << res << endl;
		vec.clear();
	}
}
