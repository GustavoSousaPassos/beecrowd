#include <iostream>

using namespace std;

int main()
{
	int val;
	
	cin >> val;
	
	for(int i = 1; i <= 10; i++)
		cout << i << " x " << val << " = " << val*i << endl;
}
