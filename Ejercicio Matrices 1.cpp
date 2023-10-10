#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	
	int L1, L2;
	int LIMIT = 10;

	int i, j;
	int RAND = 0;

	int SUMA = 0;
	int OPERACION;
	int FLAG = 0;
	
	int k;
	
	int USERINPUT;
	
	while (1){
		
		srand(time(NULL));
		
		printf("Escriba el tamaño N x N de la matriz 1: \n");
		scanf("%d", &L1);
		
		printf("Escriba el tamaño N x N de la matriz 2: \n");
		scanf("%d", &L2);
		// Arreglo de arreglos
		int M1[L1][L1];
		int M2[L2][L2];
		
		int DOTSUM = 0;
		int DOT = 0;
		
		int MSUM[L1][L1];
		int MDIF[L1][L1];
		int MX[L1][L1];
		
		int SUMATRIANG = 0;
		int SUMADIAG1 = 0;
		int SUMADIAG2 = 0;
		
		printf("M1 = \n\n");
		for (i = 0; i < L1; i++){
			SUMA = 0; 
			for (j = 0; j < L1; j++){
				
				RAND = rand()%LIMIT;
				M1[i][j] = RAND;
				
				printf("%d     ", M1[i][j]);
				SUMA += M1[i][j];
			}
		
			SUMADIAG1 += M1[i][i];
		
			printf("La suma de este renglon es = %d", SUMA);
			printf("\n");
		
		}
	
		printf("\nM2 = \n\n");
		
		for (i = 0; i < L2; i++){
			SUMA = 0; 
			for (j = 0; j < L2; j++){
			
				RAND = rand()%LIMIT;
				M2[i][j] = RAND;
				
				printf("%d     ", M2[i][j]);
				SUMA += M2[i][j];
			}
			
			SUMADIAG2 += M2[i][i];
			
			printf("La suma de este renglon es = %d", SUMA);
			printf("\n");
			
		}
		
		printf("Escriba la operacion que se quiere realizar: \n 1 = SUMA, \n 2 = RESTA, \n 3 = MULTIPLICACION, \n 4 = DIAGONAL, \n 5 = SUMA TIRANGULAR SUPERIOR, \n 6 = Terminar el programa: \n");
		
		scanf("%d", &OPERACION);
		
		switch(OPERACION) {
			
			case 1:
				// SUMA
				FLAG = L1%L2;
				if (FLAG != 0){
					printf("La operacion no puede ser concluida pues: \n L1 = %d, L2 = %d no son IGUALES. \n\n", L1, L2);
					
					break;
				}
				
				printf("La suma: M1 + M2 = \n\n");
				
				for (i = 0; i < L1; i++){
					
					for (j = 0; j < L1; j++){
						
						SUMA = M1[i][j] + M2[i][j];
						
						MSUM[i][j] = SUMA;
						
						printf("%d     ", MSUM[i][j]);
						
					}
					printf("\n");
				}
				
				break;
			case 2:
				// RESTA
				
				FLAG = L1%L2;
				if (FLAG != 0){
					printf("La operacion no puede ser concluida pues: \n L1 = %d, L2 = %d no son IGUALES. \n\n", L1, L2);
					
					break;
				}
				
				printf("La suma: M1 + M2 = \n\n");
				
				for (i = 0; i < L1; i++){
					
					for (j = 0; j < L1; j++){
						
						SUMA = M1[i][j] - M2[i][j];
						
						MSUM[i][j] = SUMA;
						
						printf("%d     ", MSUM[i][j]);
						
					}
					printf("\n");
				}
				
				break;
			case 3:
				// MULTIPLICACION
				FLAG = L1%L2;
				if (FLAG != 0){
					printf("La operacion no puede ser concluida pues: \n L1 = %d, L2 = %d no son IGUALES. \n\n", L1, L2);
					
					break;
				}
				
				for (i = 0; i < L1; i++){
		
					SUMA = 0;
		
					for (j = 0; j < L1; j++){
				
						DOTSUM = 0;
				
						for (k = 0; k < L1; k++){
					
							DOT = (M1[i][k] * M2[k][j]);
							DOTSUM += DOT;
				
						}
			
						MX[i][j] = DOTSUM;
						printf("%d     ", MX[i][j]);
						
					}
					printf("\n");
				}
				break;
				
			case 4:
				// DIAGONAL
				
				printf("Escriba que diagonal de que matriz quiere verificar: \n 1 = M1, \n 2 = M2: \n");
				scanf("%d",&USERINPUT);
				
				switch(USERINPUT){
					
					case 1:
						
						printf("La diagonal de la matriz 1 es: \n\n");
						
						for (i = 0; i < L1; i++){
							
							printf("+");
							
							for (j = 0; j <i; j++){
								
								printf("   ");
								
							}
							
							printf("%d", M1[i][i]);
							printf("\n");
						}
						
						printf(" = %d \n", SUMADIAG1);
						break;
						
					case 2:
						printf("La diagonal de la matriz 2 es: \n\n");
						
						for (i = 0; i < L2; i++){
							
							printf("+");
							
							for (j = 0; j <i; j++){
								
								printf("   ");
								
							}
							
							printf("%d", M2[i][i]);
							printf("\n");
						}
						
						printf(" = %d \n", SUMADIAG2);
						break;
						
					default:
						
						printf("La opcion no es valida. \n");
						break;
				}
				
				break;
			case 5:
				// SUMA TRIANGULAR
				
				printf("Escriba que suma TRIANGULAR de que matriz quiere verificar: \n 1 = M1, \n 2 = M2: \n");
				scanf("%d",&USERINPUT);
				
				switch(USERINPUT){
					case 1:
						
						printf("La suma TRIANGULAR de la matriz 1 es: \n\n");
						
						for (i = 0; i < L1; i ++){
							printf("+");
							for (j = 0; j < L1; j++){
								
								if (j > i) {
									
									SUMATRIANG += M1[i][j];
									printf("   %d", M1[i][j]);
									
								} else {
									
									printf("    ");
									
								}
								
							}
							printf("\n");
						} 
						
						printf(" = %d\n", SUMATRIANG);
						break;
						
					case 2:
						
						printf("La suma TRIANGULAR de la matriz 2 es: \n\n");
						
						for (i = 0; i < L2; i ++){
							printf("+");
							for (j = 0; j < L2; j++){
								
								if (j > i) {
									
									SUMATRIANG += M2[i][j];
									printf("   %d", M2[i][j]);
									
								} else {
									
									printf("    ");
									
								}
								
							}
							printf("\n");
						} 
						
						printf(" = %d\n", SUMATRIANG);
						
						break;
					
				default:
				
					printf("La opcion no es valida. \n");
					break;	
				}
				
				break;
				
			case 6:
				// RETORNAR
				
				printf("Cerrando el programa.. \n");
				
				return 0;
				break;
				
			default:
	
				printf("La opción no existe. \n");
				
				break;
		}
		
	}
}
