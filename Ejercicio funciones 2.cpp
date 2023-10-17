// Ejercicio 1: Implementar el programa siguiente y eliminar todos los posibles errores.

// El programa debe mostrar el resultado de la imagen etc etc.

// Programa: !!

#include <stdio.h>

int suma(int a, int b);

int main(){
	
	int num1, num2, sum;
	
	printf("Introducir dos numeros a sumar: \n");
	scanf("%d %d", &num1, &num2);
	sum = suma(num1, num2);
	
	printf("La suma es: %d\n", sum);
	return 0;
}

int suma(int a, int b){
	
	int add;
	add = a + b;
	
	return add;
	
}
