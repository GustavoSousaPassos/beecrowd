#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double raio, n = 3.14159, area;
	
	cin >> raio;
	
	area = n * pow(raio, 2);
	
	cout << "A=" << fixed << setprecision(4) << area << endl;
}
