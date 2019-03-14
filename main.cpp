#include <iostream>
#includ <studio.h>
#includ <stdlib.h>
int main(int argc, char** argv) {
	
	int cont, maior, numero[10];
	for(cont = 0; cont < 10; cont++){
		printf("Digite o numero: \n");
		scanf("%d", &numero);
	}
	maior = numero[0];
	for (cont = 0;cont < 10; cont++){
		if(numero[cont] > maior){
			maior = numero[cont];
		}
	}
	printf("O maior valor e: %d \n", maior);
	
}
