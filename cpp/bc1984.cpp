#include <iostream>
#include <string>

using namespace std;

int main()
{
	int d = 0;
	long long num;
	string nCo, res;
	
	cin >> num;
	
	nCo = to_string(num);
	
	int tam = nCo.size();
	
	res.resize(tam);
	
	for(int i = tam-1; i >= 0; i--)
	{
	    res[d] = nCo[i];
	    d++;
	}
	
	cout << res << endl;
}
