#include <iostream>

using namespace std;

int main()
{
	int dMo[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int day, mo, sDay;
	string res;
	
	while(cin >> mo >> day)
	{
		sDay = 0;
		res = "";
		
		if(mo == 12)
		{
			switch(day)
			{
				case 25: res = "E natal!"; break;
				case 24: res = "E vespera de natal!"; break;
				default: res = "Ja passou!"; break;
			}
			cout << res << endl;
		}
		else
		{
			for(int i = mo; i < 12; i++)
				sDay += dMo[i-1];
				
			sDay -= day;
			sDay += 25;
		
			cout << "Faltam " << sDay << " dias para o natal!" << endl;
 		}
	}
}
