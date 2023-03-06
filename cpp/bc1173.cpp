#include <iostream>

using namespace std;

int main()
{
	int vec[10], val;
	
	cin >> val;
	vec[0] = val;
	
	for(int i = 1; i < 10; i++)
		vec[i] = vec[i-1] * 2;
	for(int i = 0; i < 10; i++)
		cout << "N[" << i << "] = " << vec[i] << endl;
}
