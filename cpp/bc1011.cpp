#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double r, pi = 3.14159, volEs;
	
	cin >> r;
	
	volEs = (4.0/3) * pi * pow(r, 3);
	
	cout << "VOLUME = " << fixed << setprecision(3) << volEs << endl;
}
