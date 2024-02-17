#include <iostream>

using namespace std;

int main()
{
	int vec[5], tTea, count = 0;
	
	cin >> tTea;
	cin >> vec[0] >> vec[1] >> vec[2] >> vec[3] >> vec[4];
	
	for(int i = 0; i < 5; i++)
		if(vec[i] == tTea) count++;
	
	cout << count << endl;
}
