#include <iostream>

using namespace std;

int main()
{
	int p, r;
	char res;
	
	cin >> p >> r;
	
	if(p == 0) res = 'C';
	else res = r == 0? 'B' : 'A';
	
	cout << res << endl;
}
