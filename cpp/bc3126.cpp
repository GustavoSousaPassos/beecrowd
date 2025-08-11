#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int count, i = 0, res = 0;
    string token;
    
    cin >> count;
    
    cin.ignore();
    
    int vec[count];
    string li;
    
    getline(cin, li);
    
    stringstream ss(li);
    
    while(ss >> token)
    {
        vec[i] = stoi(token);
        i++;
    }
    
    for(int j = 0; j < count; j++)
        if(vec[j] == 1) res++;
    
    cout << res << endl;
}
