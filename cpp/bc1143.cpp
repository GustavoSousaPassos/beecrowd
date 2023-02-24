#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int count;
	
	cin >> count;
	
	for(int i = 1; i <= count; i++)
		cout << i << " " << pow(i,2) << " " << pow(i, 3) << endl;
}
