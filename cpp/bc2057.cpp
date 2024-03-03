#include <iostream>

using namespace std;

int main()
{
	int pa, hVi, fu, res;
	
	cin >> pa >> hVi >> fu;
	
	res = pa + hVi + fu;
	
	if(res < 0) res += 24;
	else if(res > 24) res -= 24;
	
	cout << res << endl;
}
