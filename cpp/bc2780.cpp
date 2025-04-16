#include <iostream>

using namespace std;

int main()
{
	int val, res;
	
	cin >> val;
	
	if(val <= 800) res = 1;
	else if(val <= 1400) res = 2;
	else res = 3;
	
	cout << res << endl;
}
