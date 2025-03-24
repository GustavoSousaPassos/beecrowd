#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int nPe, nJi = 0, to = 0;
    string cmd, input, token;
    
    while(true)
    {
        getline(cin, input);
        
        istringstream iss(input);
        
        iss >> token;
        
        cmd = token;
        
        if(cmd == "ABEND") break;
        
        iss >> token;
        
        nPe = stoi(token);
        
        if(cmd == "SALIDA")
        {
            nJi++;
            to += nPe;
        }
        else if(cmd == "VUELTA")
        {
            nJi--;
            to -= nPe;
        }
        
    }
    
    cout << to << "\n" << nJi << endl;
}

