#include <stdlib.h>
#include <stdio.h>
#include <time.h>
struct lista {
       int iNum;
       struct lista *pLista;
};
 
typedef lista Lista;

Lista* insereLista(Lista *pLista, int iNum);
int getTamanhoLista(Lista *pLista);
void criaVetor(Lista *pLista, int *pVet);
int main(int argc, char *argv[]) {    
    Lista *pLista = NULL;
    int *pVet = NULL;
     
    for (int i = 0; i < 10; i++) {
        int iNum = (int) rand() % 10;
        pLista = insereLista(pLista, iNum);
    }
     
    criaVetor(pLista, pVet);
     
    system("pause");    
}
Lista* insereLista(Lista *pLista, int iNum) {
       Lista *pAux = NULL;
       pAux = (Lista *) malloc(sizeof(Lista));
       pAux->iNum = iNum;
       pAux->pLista = pLista;
       return pAux;
} 
int getTamanhoLista(Lista *pLista) {
    int iTam = 0;
    Lista *pAux = pLista;
    while (pAux != NULL) {
          iTam++;
          pAux = pAux->pLista;
    }
    return iTam;
}
void criaVetor(Lista *pLista, int *pVet) {
     int iTamLista = 0;
     int i = 0;
     Lista *pAux = pLista;
      
     iTamLista = getTamanhoLista(pLista);
     pVet = (int *) malloc(sizeof(int) * iTamLista);
      
      
     while (pAux != NULL) {
           pVet[i] = pAux->iNum;
           printf("\nPosicao vetor %d : %d ", i, pVet[i]);
           pAux = pAux->pLista;
           i++;
     }
     printf("\n\n");
}

