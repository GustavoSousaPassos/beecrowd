#include <stdio.h>

int main()
{
	float pNota, sNota, tNota, qNota, me;
	
	scanf("%f %f %f %f", &pNota, &sNota, &tNota, &qNota);
	
	me = (pNota*2 + sNota*3 + tNota*4 + qNota) / 10.0;
	
	printf("Media: %.1f\n", me);
	
	if(me >= 7.0) printf("Aluno aprovado.\n");
	else if(me < 5.0) printf("Aluno reprovado.\n");
	else 
	{
		float nEx;
		printf("Aluno em exame.\n");
		
		scanf("%f", &nEx);
		
		printf("Nota do exame: %.1f\n", nEx);
		
		me = (me + nEx) / 2.0;
		
		if(me >= 5.0) printf("Aluno aprovado.\n");
		else printf("Aluno reprovado.\n");
		
		printf("Media final: %.1f\n", me);
	}
}
