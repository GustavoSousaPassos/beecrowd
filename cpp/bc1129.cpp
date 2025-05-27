#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    char res[] = {'A', 'B', 'C', 'D', 'E'}; 
    string line, token;
    int count, qBr, iCe, alt[5];

    while(true)
    {
        cin >> count;
        cin.clear();

        if(count == 0) break;
        else
        {
            cin.ignore();
            for(int i = 0; i < count; i++)
            {
                qBr = iCe = 0;
                getline(cin, line);

                istringstream iss(line);

                int j = 0;
                while(iss >> token) 
                {
                    alt[j] = stoi(token);
                    
                    if(alt[j] <= 127) iCe = j;
                    else qBr++;
                    j++;
                }

                if(qBr == 4) cout << res[iCe] << endl;
                else cout << "*" << endl;
            }    
        }
    }
}
