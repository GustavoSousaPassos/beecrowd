#include <iostream>

using namespace std;

int main()
{
	int ePla, fPla, sPla, ro, ac, so, winner = 0;
	
	cin >> ePla >> fPla >> sPla >> ro >> ac;
	
	so  = (fPla + sPla) % 2;
	
	if(ro == 0 && ac == 0)
	{
		if(ePla == 1)
		{
			if(ePla == 1)
				winner = so == 0? 1 : 2;
		}
		else
		{
			winner = so != 0? 1 : 2; 
		}
	}
	else 
	{
		if(ro == 1 && ac == 1) winner = 2;
		else if((ro == 1 && ac == 0) || (ro == 0 && ac == 1)) winner = 1;
	}
	
	cout << "Jogador " << winner << " ganha!" << endl;
}
