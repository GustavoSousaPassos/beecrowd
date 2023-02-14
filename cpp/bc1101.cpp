#include <iostream>

using namespace std;

int main()
{
	int m, n;
	
	while(1)
	{
		int sum = 0;
		
		cin >> m >> n;
		
		if(m <= 0 || n <= 0) break;
		else if(n < m)
		{
			int aux = m;
			m = n;
			n = aux;
		}
		
		for(int i = m; i <= n; i++)
		{
			sum += i;
			cout << i << " ";
		}
		cout << "Sum=" << sum << endl;
	}
}
