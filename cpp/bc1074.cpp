#include <iostream>

using namespace std;

int main()
{
	int in;
	string res = "";
	
	cin >> in;
	
	for(int i = 0; i < in; i++)
	{
		int val;
		
		cin >> val;
		
		if(val == 0) res += "NULL";
		else
		{
			if(val % 2 == 0) res += "EVEN";
			else res += "ODD";
			if(val > 0) res += " POSITIVE";
			else res += " NEGATIVE";
		}
		
		cout << res << endl;
		res = "";
	}
}
