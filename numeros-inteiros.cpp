#include <iostream>

void inteiros(int n1, int n2){
	int cont, retorno;
		for(cont = n1; cont < n2; cont++){
			retorno = cont;
			printf("%d \n", retorno);
		}	
}


int main(int argc, char** argv) {
	int n1, n2, inteiro;
	printf("Digite o primeiro numero: \n");
	scanf("%d", &n1);
	printf("Digite o segundo numero: \n");
	scanf("%d", &n2);
	
	inteiros(n1,n2);
	//printf("%d", inteiro);
	
	
}
