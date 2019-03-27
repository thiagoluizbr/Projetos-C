#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	struct lista{
		int valor;
		struct lista *proximo;
	};
	
	struct lista m1, m2, m3;
	struct lista *no = &m1;
	
	m1.valor = 10;
	m2.valor = 20;
	m3.valor = 30;
	
	
	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = (struct lista *)0;
	
	while(no != (struct lista *)0){
		printf("%i \n", no->valor);
		no = no -> proximo;
		
		
	}
	
	
	
	
	
	getchar();
	return 0;
}
