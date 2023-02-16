#include <stdio.h>

int main()
{
	int senha = 2002, inS;
	
	while(senha == 2002)
	{
		scanf("%d", &inS);
		
		if(inS == senha)
		{
			printf("Acesso Permitido\n");
			break;
		}
		else printf("Senha Invalida\n");
	}
}

