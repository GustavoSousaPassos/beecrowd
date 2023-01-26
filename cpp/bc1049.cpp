#include <iostream>

using namespace std;

int main()
{
	string fVer, sVer, tVer;

	cin >> fVer >> sVer >> tVer;
	
	if(fVer == "vertebrado")
	{
		if(sVer == "ave")
			tVer == "carnivoro"? cout << "aguia" << endl : cout << "pomba" << endl;
		else
			tVer == "onivoro"? cout << "homem" << endl : cout << "vaca" << endl;
	}
	else
	{
		if(sVer == "inseto")
			tVer == "hematofago"? cout << "pulga" << endl : cout << "lagarta" << endl;
		else
			tVer == "hematofago"? cout << "sanguessuga" << endl : cout << "minhoca" << endl;
	}
}
