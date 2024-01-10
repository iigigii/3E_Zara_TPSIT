//Zara Luigi
//Classe 3E
//Data 10 gennaio 2024

#include <stdio.h>

int main()
{
    //Dichiarazione variabile stringa
    char stringa[15];
    
    //Chiedo all'utente di inserire una string in input
    printf("inserisci una stringa: ");
    scanf("%s", stringa);
    
    //new paragraph
    printf("\n");
    //mostro in output la stringa che l'utente ha inserito
    printf("Hai inserito la seguente strigna : %s\n", stringa);
    
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
   
    stringa[4]='\0';
    
    //new paragraph
    printf("\n");
    //mostro in output i primi quattro caratteri della stringa 
    printf("I primi quattro caratteri sono: %s", stringa);

    return 0;
}
