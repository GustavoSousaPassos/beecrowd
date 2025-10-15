#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string line, token;
    int i = 0, fVal, sVal, res = 0;
    
    getline(cin, line);
    
    int tam = line.size() / 2 + 1;
    int cVal[tam];
    
    stringstream ss(line);

    while(ss >> token)
    {
        cVal[i] = stoi(token); 
        i++;
    }
    
    fVal = cVal[0];
    
    if(cVal[1] > 0) sVal = cVal[1];
    else
    {
        for(int j = 2; j < tam; j++)
        {
            if(cVal[j] > 0)
            {
                sVal = cVal[j];
                break;
            }
        }
    }
    for(int j = 1; j < fVal+1; j++) res += j;
    for(int j = 0; j < sVal; j++) res += j;
    
    cout << res << endl;
    return 0;
}

