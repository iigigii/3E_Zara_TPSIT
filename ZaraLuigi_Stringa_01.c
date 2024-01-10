//Zara Luigi
//Classe 3E
//Data 10 gennaio 2024

#include <stdio.h>

int main()
{
    //Dichiarazione variabili
    char stringa[15];
    char stringa2[15];
    int lungh;
    
    //Chiedo all'utente di inserire una string in input
    printf("inserisci una stringa: ");
    scanf("%s", stringa);
    
    //new paragraph
    printf("\n");
    //mostro in output la prima lettera della stringa che l'utente ha inserito 
    printf("La prima lettera della stringa è la seguente  %c\n", stringa[0]);
    //mostro in output la seconda lettera della stringa che l'utente ha inserito 
    printf("La seconda lettera della stringa è la seguente  %c\n", stringa[1]);
    //mostro in output la terza lettera della stringa che l'utente ha inserito 
    printf("La terza lettera della stringa è la seguente  %c\n", stringa[2]);
    //mostro in output la quarta lettera della stringa che l'utente ha inserito 
    printf("La quarta lettera della stringa è la seguente  %c\n", stringa[3]);
    //mostro in output la quinta lettera della stringa che l'utente ha inserito 
    printf("La quinta lettera della stringa è la seguente  %c\n", stringa[4]);
   
    
    printf("\n");
    printf("Funzioni principali:\n");
    printf("Lunghezza (strlen)\n");
    //comando strlen
    lungh=strlen(stringa);
    
    //Mostro in output la lunghezza della stringa 
    printf("La lunghezza della stringa inserita e': %d\n",lungh);
    scanf("%s",stringa2);
    strcpy(stringa,stringa2);
    /*for(i=0;i<strlen(stringa2);i++){
    stringa[i]=stringa2[i];
    }*/
    
    //mostro in output la stringa di destinazione
    printf("La stringa di destinazione %s",stringa);

    return 0;
}
