#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double pNota, sNota, media;
	
	cin >> pNota >> sNota;
	
	media = (pNota*3.5 + sNota*7.5) / 11.0;
	
	cout << "MEDIA = " << fixed << setprecision(5) << media << endl;
}
