#include <iostream>
int main(int argc, char** argv) {
	int vetor1[10], vetor2[10], vetor3[10];
	int i,j,z;
	for(i=0; i < 10; i++){
		printf("Digite o valor para o primeiro vetor: \n");
    	scanf("%d",&vetor1[i]);
    }
	for(j=0; j < 10; j++){
		printf("Digite o valor para o segundo vetor: \n");
    	scanf("%d",&vetor2[j]);
    }
    while(i == j){
    	vetor3[z] = vetor1[i] * vetor2[j];
    	i++;
        j++;
        z++;
	}
	        printf("O vetor da posição %i é %d",z,vetor3[z]);
}
