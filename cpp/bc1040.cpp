#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float pNota, sNota, tNota, qNota, me;
	
	cin >> pNota >> sNota >> tNota >> qNota;
	
	me = (pNota*2 + sNota*3 + tNota*4 + qNota) / 10.0;
	
	cout << "Media: " << fixed << setprecision(1) << me << endl;
	
	if(me >= 7.0) cout << "Aluno aprovado." << endl;
	else if(me < 5.0) cout << "Aluno reprovado." << endl;
	else
	{
		float nEx;
		
		cout << "Aluno em exame." << endl;
		cin >> nEx;
		cout << "Nota do exame: " << nEx << endl;
		
		me = (me + nEx) / 2.0;
		
		if(me >= 5.0) cout << "Aluno aprovado." << endl;
		else cout << "Aluno reprovado." << endl;
		
		cout << "Media final: " << fixed << setprecision(1) << me << endl;
	}
}
