#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	long int in;
	
	cin >> in;
	
	for(int i = 1; i <= in; i++)
		if(i % 2 == 0) cout << i << "^2 = " << fixed << setprecision(0) << pow(i, 2) << endl;
}
