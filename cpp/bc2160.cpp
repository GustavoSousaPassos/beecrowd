#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name, res;
	
	getline(cin, name);
	
	res = name.length() <= 80? "YES" : "NO";
	
	cout << res << endl;
}
