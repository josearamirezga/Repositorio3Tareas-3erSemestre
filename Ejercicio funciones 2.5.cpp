#include <stdio.h>

float perimetroFigura(float Numero){
	
	float perimetro;
	perimetro = 4.0 * Numero;
	
	return perimetro;
	
}

float areaFigura(float Numero){
	
	float area;
	area = Numero * Numero;
	
	return area;
	
}

int main(){
	
	int Num;
	
	printf("Lado de un cuadrado: \n");
	scanf("%d", &Num);
	
	printf("Perimetro: %f \n", perimetroFigura(Num));
	printf("Area: %f \n",areaFigura(Num));
	
	return 0;
	
}
