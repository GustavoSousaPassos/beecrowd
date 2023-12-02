#include <iostream>
#include <sstream>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int num;
	
	cin >> num;
	
	stringstream stream;
	stream << hex << num;
	
	string nHex = stream.str();
	
	transform(nHex.begin(), nHex.end(), nHex.begin(), ::toupper);
	
	cout << nHex<< endl;
}
