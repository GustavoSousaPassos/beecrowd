#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i = 0;
	float val = 0.0, s;
	
	while(i != 2)
	{
		cin >> val;
		
		if(val >= 0.0 && val <= 10.0)
		{
			s += val;
			i++;
		}
		else cout << "nota invalida" << endl;
	}
	
	cout << "media = " << fixed << setprecision(2) << s / 2.0 << endl;
}
