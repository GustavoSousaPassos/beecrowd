#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float s = 1.0, odd = 3, pair = 2;
	
	for(int i = 1; i <= 39; i++)
	{
		s += odd / pair;
		
		odd += 2;
		pair *= 2;
	}
	
	cout << fixed << setprecision(2) << s << endl;
}
