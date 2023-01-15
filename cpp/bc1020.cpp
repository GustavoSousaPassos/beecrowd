#include <iostream>

using namespace std;

int main()
{
	int valIn, day, mounth, year, i;
	
	day = mounth = year = 0;
	
	cin >> valIn;
	
	for(int i = 1; i <= valIn; i++)
	{
		day++;
		
		if(day == 30)
		{
			mounth++;
			day = 0;
		}
		if(mounth == 12)
		{
			year++;
			mounth = 0;
			day = -5;
		}	
	}
	
	cout << year << " anos(s)\n" << mounth << " mes(es)\n" << day << " dia(s)" << endl;
}
