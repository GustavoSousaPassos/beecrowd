#include <iostream>

using namespace std;

int main()
{
	int num, res;
	
	cin >> num;
	
	res = num % 2 == 0? num + 2 : num + 1;
	
	cout << res << endl;
}
