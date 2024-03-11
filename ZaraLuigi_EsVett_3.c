//Zara Luigi
//classe 3E
//data 11-03-2024

/*
Scrivere un programma in c che dopo aver inserito un vettore di N numeri controlli l’esistenza di
un numero richiesto successivamente all’utente. In caso affermativo visualizzare quante volte si
ripete il numero e che posizione/i occupa nel vettore utilizzato.
*/

#include <stdio.h>

int main()
{
    //dichiarazione e inizializzazione delle variabili
    int qtaNumeri;
    int numeroDaCercare;
    int count = 0;
    
    //chiedo all'utente la quantità di numeri che vuole inserire
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &qtaNumeri);
    
    //istanzio i vettori
    int vett [qtaNumeri];
    
    //new paragraph
    printf("\n");
    
    //popopo il vettore
    printf("inserisci %d numeri nel vettore \n", qtaNumeri);
    for(int i=0; i < qtaNumeri; i++){
        printf("%d° numero: ", (i+1));
        scanf("%d", &vett[i]);
    }

    //new paragraph
    printf("\n");
    
    //chiedo all'utente il numero che  desidera cercare
    printf("Quale numero desideri cercare? ");
    scanf("%d", &numeroDaCercare);
    
    //ciclo for
    for(int i = 0; i < qtaNumeri; i++){
         if(vett[i] == numeroDaCercare){
        //mostro la posizione del numero che l'utente sta cercando nel vettore
        printf("\nLa posizione/i occupata/e dal numero %d nel vettore è: ", numeroDaCercare);
        }
    
        if(vett[i] == numeroDaCercare){
            printf("%d", i+1);
            count++;
        }
    }
    
    //new paragraph
    printf("\n\n");
    
    //mostro in output i risultati
    if(count > 0){
        printf("Il numero %d è presenre nel vettore e si ripete %d volte", numeroDaCercare, count);
    } else{
       printf("Il numero %d NON è presenre nel vettore", numeroDaCercare); 
    }

    return 0;
}