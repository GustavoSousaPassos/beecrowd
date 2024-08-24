#include <iostream>

using namespace std;

int main()
{
	int cTe, dis, tMi, vel;
	double vMe;
	
	while(cin >> cTe)
	{
		vMe = 0.0;
		
		for(int i = 0; i < cTe; i++)
		{
			cin >> tMi >> dis;
			
			vel = (double) (dis*1000) / (tMi*60);
			
			if(vel > vMe)
			{
				cout << i+1 << endl;
				vMe = vel;
			}
		}
	}
}
