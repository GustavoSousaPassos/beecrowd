#include <iostream>

using namespace std;

int main()
{
	int valX, valZ, j , sum;
	valZ = j = sum = 0;
	
	cin >> valX;
	
	while(true)
	{
		cin >> valZ;
		if(valZ > valX) break;
	}
	
	for(int i = valX; i < valZ; i++)
	{
		sum += i;
		j++;
		
		if(sum > valZ) break;
	}
	
	cout << j << endl;
}
