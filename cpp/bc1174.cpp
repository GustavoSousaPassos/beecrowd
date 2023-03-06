#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float vec[100];
	
	for(int i = 0; i < 100; i++)
		cin >> vec[i];
	for(int i = 0; i < 100; i++)
		if(vec[i] <= 10) cout << "A[" << i << "] = " << fixed << setprecision(1) << vec[i] << endl;	
}
