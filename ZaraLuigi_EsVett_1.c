//Zara Luigi
//classe 3E
//data: 10-03-2024

/*
Dopo aver caricato in memoria un 2 vettori di uguale dimensione composti da numeri interi
scrivere in output un terzo vettore dato dalla somma delle componenti fatta a una a una (Vettore
somma).
*/

#include <stdio.h>

int main()
{
    //dichiarazione e inizializzazione delle variabili
    int dim = 5;
 
    //istanzio i vettori
    int vett1 [dim];    //vettore che conterrà i numeri inseriti dall'utente
    int vett2 [dim];    //vettore che conterrà i numeri inseriti dall'utente
    int vetSomma [dim]; //vettore che conterrà la somma dei numeri inseriti dall'utente
    
    //popolo il primo vettore
    printf("Popola il primo vettore \n");
    for(int i = 0; i < dim; i++){
        printf("inserisci il %d° numero: ", (i+1));
        scanf("%d", &vett1[i]);
    }
    
    //new paragraph
    printf("\n");
    
    //popolo il secondo vettore
    printf("Popola il secondo vettore \n");
    for(int i = 0; i < dim; i++){
        printf("inserisci il %d° numero: ", (i+1));
        scanf("%d", &vett2[i]);
    }
    
    //eseguo la somma dei vettori 1 e 2 nel vettoreSomma
    for(int i = 0; i < dim; i++){
        vetSomma[i] = vett1[i] + vett2[i];
    }
    
    //new paragraph
    printf("\n");
    
    //mostro in output la somma dei numeri
    printf("Vettore somma \n");
    for(int i = 0; i < dim; i++){
        if(vett2[i] < 0){
            printf("%d + (%d) = %d \n", vett1[i], vett2[i], vetSomma[i]);
        } else printf("%d + %d = %d \n", vett1[i], vett2[i], vetSomma[i]);
    }
    
    return 0;
}
