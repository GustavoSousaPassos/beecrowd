#include <iostream>
#include <string>

using namespace std;

void calc(int co)
{
    int rJo = 0, rMa = 0, lim = co*2;
    string line;
    
    getline(cin, line);
    
    for(int i = 0; i < lim; i++)
    {
        if(line[i] == '0') rMa++;
        else if(line[i] == '1') rJo++;
    }
    
    cout << "Mary won " << rMa << " times and John won " << rJo << " times" << endl;
    cin.clear();
}

int main()
{
    int count;
    
    while(true)
    {
        cin >> count;
        
        if(count == 0) break;
        else  
        {
            cin.ignore();
            calc(count);
        }    
    }
    
}
