#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double vec[100], val;
	
	cin >> val;
	
	vec[0] = val;
	
	for(int i = 1; i < 100; i++)
		vec[i] = vec[i-1] / 2.0;
	for(int i = 0; i < 100; i++)
		cout << "N[" << i << "] = " << fixed << setprecision(4) << vec[i] << endl; 
}
