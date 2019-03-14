#include <iostream>
int main(int argc, char** argv) {
	floot nota1,nota2,nota3;
	floot i, j, z, maior1, mediamaior, media, maior2;
	
	
	printf("Digite a primeira nota do aluno: %d\n", i);
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota do aluno: %d\n", j);
    scanf("%f", &nota2);
	
	printf("Digite a terceira nota do aluno: %d\n", z);
    scanf("%f", &nota3);
        
    media = ( nota1 + nota2 + nota3 ) / 3;
    
    if(nota1 > nota2 && nota1 > nota3){
    	maior1 = nota1;
    	if(nota2 > nota3){
    		maior2 = nota2;
		}
		if(nota3 > nota2){
			maior2 = nota3;
		}
	}
	if(nota2 > nota1 && nota2 > nota3){
    	maior1 = nota2;
    	if(nota1 > nota3){
    		maior2 = nota1;
		}
		if(nota3 > nota1){
			maior2 = nota3;
		}
		if(nota3 > nota1 && nota3 > nota2){
    	maior1 = nota3;
    	if(nota1 > nota2){
    		maior2 = nota1;
		}
		if(nota2 > nota1){
			maior2 = nota2;
		}
		}
	}
	
	mediamaior = (maior1 + maior2) / 2;
	
	printf("Sua nota mais alta é: %f \n", maior1);
	printf("Sua media normal: %f \n", media);
	printf("Sua media com duas notas: %f \n", mediamaior);
		
		
		
		
	}
