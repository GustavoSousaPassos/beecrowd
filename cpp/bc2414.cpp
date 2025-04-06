#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    string line, token;
    int qtd, ma;
    vector<int> seq;
    
    getline(cin, line);
    
    istringstream iss(line);

    while(iss >> token)
    {
        seq.push_back(stoi(token));
    }
    
    qtd = seq.size();
    ma = seq[0];
    
    for(int i = 0; i < qtd; i++)
        if(seq[i] > ma) ma = seq[i];
        
    cout << ma << endl;
}
