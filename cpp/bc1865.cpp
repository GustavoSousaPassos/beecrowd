#include <iostream>

using namespace std;

int main()
{
	int count, force;
	string name;
	
	cin >> count;
	
	for(int i = 0; i < count; i++)
	{
		char res;
		
		cin >> name >> force;
		
		if(name == "Thor") res = 'Y';
		else res = 'N';
		
		cout << res << endl;
	}
}
