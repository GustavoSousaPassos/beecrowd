#include <iostream>

using namespace std;

int main()
{
	int valIn, h, m, s;
	
	cin >> valIn;
	
	h = (valIn/60) / 60;
	m = valIn/60 - h*60;
	s = valIn % 60;
	
	cout << h << ":" << m << ":" << s << endl;
}
