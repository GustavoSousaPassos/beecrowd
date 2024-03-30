#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int ho, mi, val, count;
	string mes = "";
	
	cin >> count;
	
	for(int i = 0; i < count;i++)
	{
		cin >> ho >> mi >> val;
		
		mes = val == 1? "A porta abriu!" : "A porta fechou!";
		
		cout << setw(2) << setfill('0') << ho << ":" << setw(2) << setfill('0')<< mi << " - " << mes << endl;
		
	}
}

