#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
   int info;
   struct lista * prox;
} Lista;

Lista * lista_cria () {
   return NULL;
}

Lista * lista_insere (Lista * l, int i) {
   Lista * novo = (Lista *) malloc (sizeof (Lista));
   novo-> info = i;
   novo-> prox = l;
   retornar novo;
}

void lista_imprime (Lista * l) {
   Lista * p; 
   para (p = l; p! = NULL; p = p-> prox)
       printf ("info =% d \ n", p-> info);
}

int igual (Lista * l1, Lista * l2) 
{
     Lista * p1;   
     Lista * p2; 
     
       para (p1 = l1, p2 = l2; p1! = NULL && p2! = NULL; p1 = p1-> prox, p2 = p2-> prox) {

       if (p1-> info! = p2-> info)
       return 0;
       }
       return p1 == p2;
}

Lista * lista_libera (Lista * l) {
   Lista * p = l;
   while (p! = NULL) {
       Lista * t = p-> prox; 
       livre (p);           
       p = t;              
   }
   return NULL;
}

a Principal() {
   Lista * l;
   Lista * l2;
   int n;
   l = lista_cria ();
   l = lista_insere (l, 23);
   l = lista_insere (l, 45);
   l = lista_insere (l, 67);
   l = lista_insere (l, 89);
   l = lista_insere (l, 1011);
   printf ("\ nLista original: \ n");
   lista_imprime (l);
   
   l2 = lista_insere (l, 30);
   l2 = lista_insere (l, 44);
   l2 = lista_insere (l, 69);
   l2 = lista_insere (l, 90);
   l2 = lista_insere (l, 1013);
   
   printf ("\ nLiberando uma memoria ... \ n");
   l = lista_libera (l);
   
   printf ("\ nVerifique se os caracteres são iguais: \ n");
   igual (l1, l2);

   getch ();
   
}
