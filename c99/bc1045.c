#include <stdio.h>
#include <math.h>


int main()
{
	float cVal[3];
	
	scanf("%f %f %f", &cVal[0], &cVal[1], &cVal[2]);
	
	for(;;)
	{
		if(cVal[1] > cVal[0])
		{
			float aux = cVal[1];
			cVal[1] = cVal[0];
			cVal[0] = aux;
		}
		else if(cVal[1] < cVal[2])
		{
			float aux = cVal[1];
			cVal[1] = cVal[2];
			cVal[2] = aux;
		}
		else break;
	}
	
	
	if(cVal[0] >= cVal[1]+cVal[2]) printf("NAO FORMA TRIANGULO\n");
	else
	{
		float fRes = pow(cVal[0], 2);
		float sRes = pow(cVal[1], 2) + pow(cVal[2], 2);
		
		if(fRes == sRes) printf("TRIANGULO RETANGULO\n");
		else if(fRes > sRes) printf("TRIANGULO OBTUSANGULO\n");
		else if(fRes < sRes) printf("TRIANGULO ACUTANGULO\n");
		
		if(cVal[0] == cVal[1]  && cVal[1] == cVal[2]) printf("TRIANGULO EQUILATERO\n");
		else if((cVal[0] == cVal[1] && cVal[1] != cVal[2]) || (cVal[0] != cVal[1] && cVal[1] == cVal[2])) printf("TRIANGULO ISOSCELES\n");
	}
}
