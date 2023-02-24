#include <iostream>

using namespace std;

int main()
{
	int val, fat = 1;
	
	cin >> val;
	
	for(int i = val; i > 1; i--)
		fat *= i;
	
	cout << fat << endl;
}
