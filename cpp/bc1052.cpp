#include <iostream>

using namespace std;

int main()
{
	int month;
	string res = "";
	
	cin >> month;
	
	switch(month)
	{
		case 1: res = "January"; break;
		case 2: res = "February"; break;
		case 3: res = "March"; break;
		case 4: res = "April"; break;
		case 5: res = "May"; break;
		case 6: res = "June"; break;
		case 7: res = "July"; break;
		case 8: res = "August"; break;
		case 9: res = "September"; break;
		case 10: res = "October"; break;
		case 11: res = "November"; break;
		case 12: res = "December"; break;
	}
	
	cout << res << endl;
}
