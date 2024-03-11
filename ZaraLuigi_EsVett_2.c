//Zara Luigi
//class 3E
//Data: 06-03-2024

/*
Scrivere un programma in c che dopo aver inserito un vettore di N numeri interi separi il vettore
inserito in 2 ulteriori vettori il primo contenente i numeri pari ed il secondo con i numeri dispari.
*/

#include <stdio.h>
int main()
{
    //dichiarazione e inizializzazione delle varibili
    int qtaNumeri=0;
    int contaDispari;
    int contaPari;

    //Chiedo all'utente la quantità di numeri chd vuole inserire
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &qtaNumeri);

    //istanzio i vettori con la  dimensione inserità dall'utente
    int vett [qtaNumeri]; //vettore che conterrà i numeri inseriti dall'utente
    int nPari [qtaNumeri];  //vettore che conterrà i numeri pari
    int nDispari [qtaNumeri];  //vettore che conterrà i numeri dispri

    //popolo il vettore con i numeri che verranno inseriti dall'utente
    for(int i=0; i<qtaNumeri; i++){
       printf("inserisci il %d° numero: ", (i+1));
       scanf("%d", &vett[i]);
    }

    //separo i numeri pari da quelli dispari 
    for(int i=0; i<qtaNumeri; i++){
        if(vett[i] % 2 == 0){
           nPari[contaPari] = vett[i];
           contaPari++;
        } else{
           nDispari[contaDispari] = vett[i];
           contaDispari++;
        }
    }

    //mostro in output i numeri pari
    printf("vettore Pari: ");
    for(int i=0; i<contaPari; i++){
       printf("%d ", nPari[i]);
    }
  
    //new paragraph
    printf("\n");
    
    //mostro in output i numeri dispari
    printf("vettore Dispari: ");
    for(int i=0; i<contaDispari; i++){
       printf("%d ", nDispari[i]);
    }
    
   return 0;
}   
