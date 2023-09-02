#include<iostream>

using namespace std;

int main()
{
	int sum;
	string cVal;
	
	for(int i = 0; i < 3; i++)
	{
		sum = 0;
		
		while(true)
		{
			getline(cin, cVal);
			
			if(cVal == "caw caw")
			{
				cout << sum << endl;
				break;
			}
			else
			{
				if(cVal == "*--") sum += 4;
				else if(cVal == "--*") sum += 1;
				else if(cVal == "*-*") sum += 5;
				else if(cVal == "-*-") sum += 2;
				else if(cVal == "**-") sum += 6;
				else if(cVal == "-**") sum += 3;
				else if(cVal == "***") sum += 7;
				else sum += 0;
				
			}
		}
	}
}
