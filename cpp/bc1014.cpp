#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int dis;
	float gCom;
	
	cin >> dis >> gCom;
	
	cout << fixed << setprecision(3) << dis / gCom << " km/l" << endl;
}
