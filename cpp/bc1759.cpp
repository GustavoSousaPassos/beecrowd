#include<iostream>

using namespace std;

int main()
{
	int val;
	cin >> val;
	
	for(int i = 0; i < val; i++)
		i == val-1? cout << "Ho!" << endl : cout << "Ho ";
}
