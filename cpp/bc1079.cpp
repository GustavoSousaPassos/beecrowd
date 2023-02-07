#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int val;
	float vec[3];
	
	cin >> val;
	
	for(int i = val; i > 0; i--)
	{
		cin >> vec[0] >> vec[1] >> vec[2];
		
		float sum = (vec[0]*2 + vec[1]*3 + vec[2]*5) / 10.0;
		
		cout << setprecision(1) << fixed << sum << endl;
	}
}
