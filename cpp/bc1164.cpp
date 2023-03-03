#include <iostream>

using namespace std;

int main()
{
	int count, val, sum;
	string msg = "";
	
	cin >> count;
	
	for(int i = 0; i < count; i++)
	{
		cin >> val;
		sum = 0;
		
		for(int j = 1; j < val; j++)
			if(val % j == 0) sum += j;
		
		if(sum == val) msg = "eh perfeito";
		else msg = "nao eh perfeito";
		
		cout << val << " " << msg << endl;
	}
}
