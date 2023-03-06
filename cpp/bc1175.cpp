#include <iostream>

using namespace std;

int main()
{
	int vec[20];
	
	for(int i = 19; i >= 0; i--)
		cin >> vec[i];
	for(int j = 0; j < 20; j++)
		cout << "N[" << j << "] = " << vec[j] << endl;
}
