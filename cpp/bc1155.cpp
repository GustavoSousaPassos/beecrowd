#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float s = 1.0, val;
	
	for(int i = 2; i <= 100; i++)
	{
		val = (float) 1 / i;
		s += val;
	}
	
	cout << fixed << setprecision(2) << s << endl;
}
