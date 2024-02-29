#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double v, d, area, al;
	
	while(cin >> v >> d)
	{
		area = pow(d/2, 2) * 3.14;
		al = v  / area;
		
		cout << fixed << setprecision(2) << "ALTURA = " << al << "\nAREA = " << area << endl;
	}
}
