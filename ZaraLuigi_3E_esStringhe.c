//Zara Luigi
//classe 3E
//data 18-03-2024

/*
Scrivere un programma in C che dopo aver inserito una stringa a piacere determini e o verifichi:
1) Il numero di consonanti e vocali contenute;
2) Che contenga solo lettere;
3) Il conteggio di una lettera (se presente) scelta dall’utente;
4) Crei 2 ulteriori stringhe che contengano 1 le lettere di posizione pari; la 2° le lettere di posizione
dispari;
5) Verifichi se contiene doppie.

Inserita una 2° stringa determinare:
1) Quale delle 2 è più lunga e più corta;
2) Quale delle 2 stringhe contiene più vocali;
3) Quale delle 2 stringhe contiene più consonanti;
4) Quali sono le lettere contenute in ambedue le stringhe;
*/

//str..ln

//importazione librerie
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
	//dichiarazione e inizializzazione delle variabili
	char stringa1[20]; //stringa1 di dimensione 20
	char stringa2[20]; //stringa2 di dimensione 20
	char stringaIpari[20]; //stringa che conterrà le lettere di posizione pari
	char stringaIdispari[20]; //stringa che conterrà le lettere di posizione dispari
	char letteraScelta;
    int countVocali1 = 0, countConsonanti1 = 0; //counter per la 1° stringa
    int countVocali2 = 0, countConsonanti2 = 0; //counter per la 2° stringa
    int countLetteraScelta;
    int ip=0, id=0;
    bool lettereDoppie = false;
    
	//Chiedo all'utente di inserire una striga in input
	printf("Inserisci la prima stringa\n");
	scanf("%s",stringa1);
    
    //controllo che la stringa sia valida
    for(int i=0; i<strlen(stringa1); i++){
        //se l'utente digita una stringa con caratteri > di z e < di a, l'utente non ha inserito una stringa
    	if(stringa1[i] < 'a' || stringa1[i] > 'z'){
    	    do{
    	        printf("ATTENZIONE! hai inserito una stringa invalida \n");
    	        printf("reinserisci: ");
    	        scanf("%s",stringa1);
    	    }while(stringa1[i] < 'a' || stringa1[i] > 'z');
        } 
    }
    
    //ciclo for
	for(int i=0; i<strlen(stringa1); i++){
	    //tolower converte le lettere Maiuscole in minuscole
    	stringa1[i]=tolower(stringa1[i]);
   	    //se nella stringa sono presenti le vocali (a-e-i-o-u) countVocali ne tiene conto
    	if(stringa1[i] == 97 || stringa1[i] == 101 || stringa1[i] == 105 || stringa1[i] == 111 || stringa1[i] == 117){
        	countVocali1++;
    	} else{ //se non sono vocali sono consonanti
        	countConsonanti1++;
    	}
    	
    	//se la posizione i è pari, salvo le lettere presenti nella posizone pari
    	if((i+1) % 2 == 0){
    	    stringaIpari[ip++]= stringa1[i];
    	} else { //se la posizione i è dispari, salvo le lettere presenti nella posizone dispari
    	     stringaIdispari[id++]= stringa1[i];
    	}
    	
    	//verifico se ci sono delle doppie
    	if(stringa1[i] == stringa1[i+1]){
    	    lettereDoppie = true;
    	}
	}
	
	//chiedo all'utente quale lettera desidera conteggiare
	printf("Quale lettera desideri contare? ");
    scanf(" %c", &letteraScelta); 
    // Conteggio della lettera (se presente) scelta dall’utente
    for (int i = 0; i < strlen(stringa1); i++) {
        // Verifica se la lettera scelta dall'utente è presente nella stringa
        if (tolower(stringa1[i]) == tolower(letteraScelta)) {
        countLetteraScelta++;
        }
    }

    //new paragraph
    printf("\n");
    
    //output richieste per la prima stringa
    printf("-----------------------------------------------------------------");
    printf("\n          output richieste per la prima stringa \n");
    printf("-----------------------------------------------------------------\n");
    
    //mostro in output il numero di vocali presenti nella 1° stringa
	printf("[1] - Il numero di vocali presenti nella 1° stringa è: %d \n", countVocali1);
	//mostro in output il numero di consonanti presenti nella 1° stringa
	printf("[2] - Il numero di consonanti presenti nella 1° stringa è: %d \n", countConsonanti1);
	//mostro in output il numero di volte della lettera (se presente) nella stringa scelta dall'utente
	if(countLetteraScelta > 0){
	    printf("[3] - La lettera scelta dall'utente è presente: %d volte \n", countLetteraScelta);
	}
	//mostro in output le lettere che si trovano in posizione pari
	printf("[4] - Le lettere che sono in posizione pari sono: %s \n", stringaIpari);
	//mostro in output le lettere che si trovano in posizione dispari
    printf("[5] - Le lettere che sono in posizione dispari sono: %s \n", stringaIdispari);
    //mostro in output se la stringa contiene delle doppie
    if(lettereDoppie){
        printf("[6] - la parola che hai inserito (%s) contiene delle doppie \n", stringa1);
    } else {
        printf("[6] - la parola che hai inserito (%s) NON contiene delle doppie \n", stringa1);
    }
    printf("-----------------------------------------------------------------\n");
    
    //Chiedo all'utente di inserire la seconda striga in input
	printf("Inserisci la seconda stringa\n");
	scanf("%s",stringa2);
    
    //controllo che la stringa sia valida
    for(int i=0; i<strlen(stringa2); i++){
        //se l'utente digita una stringa con caratteri > di z e < di a, l'utente non ha inserito una stringa
    	if(stringa2[i] < 97 || stringa2[i] > 122){
    	    do{
    	        printf("ATTENZIONE! hai inserito una stringa invalida \n");
    	        printf("reinserisci: ");
    	        scanf("%s",stringa1);
    	    }while(stringa2[i] < 97 || stringa2[i] > 122);
        } 
    }
    
    //ciclo for
	for(int i=0; i<strlen(stringa2); i++){
	    //tolower converte le lettere Maiuscole in minuscole
    	stringa2[i]=tolower(stringa2[i]);
   	    //se nella stringa sono presenti le vocali (a-e-i-o-u) countVocali ne tiene conto
    	if(stringa2[i] == 97 || stringa2[i] == 101 || stringa2[i] == 105 || stringa2[i] == 111 || stringa2[i] == 117){
        	countVocali2++;
    	} else{ //se non sono vocali sono consonanti
        	countConsonanti2++;
    	}
	}
    
    //new paragraph
    printf("\n");
    
    //output richieste per la seconda stringa
    printf("-----------------------------------------------------------------");
    printf("\n          output richieste per la seconda stringa \n");
    printf("-----------------------------------------------------------------\n");
    
    //mostro in output il numero di vocali presenti nella 2° stringa
	printf("Il numero di vocali presenti nella 2° stringa è: %d \n", countVocali2);
	//mostro in output il numero di consonanti presenti nella 2° stringa
	printf("Il numero di consonanti presenti nella 2° stringa è: %d \n", countConsonanti2);
	//mostro in output qual e la stringa che contiene più vocali
    if(countVocali2 > countVocali1){
        printf("La seconda stringa contiene piu vocali (%d) > (%d) \n", countVocali2, countVocali1);
    } else{
        printf("La prima stringa contiene piu vocali (%d) > (%d) \n", countVocali1, countVocali2);
    }
    //mostro in output qual e la stringa che contiene più consonanti
    if(countConsonanti2 > countConsonanti1){
        printf("La seconda stringa contiene piu consonanti (%d) > (%d) \n", countConsonanti2, countConsonanti1);
    } else{
        printf("La prima stringa contiene piu consonanti (%d) > (%d) \n", countConsonanti1, countConsonanti2);
    }
    //mostro in output qual e la stringa più corta 
    if(strlen(stringa1) < strlen(stringa2)){
        printf("La stringa 1 (%s) è piu corta della stringa 2 (%s) \n", stringa1, stringa2);
    } else if(strlen(stringa1) == strlen(stringa2)){
        printf("La stringa 1 (%s) ha la stessa lunghezza della stringa 2 (%s) \n", stringa1, stringa2);
    } else {
        printf("La stringa 2 (%s) è piu corta della stringa 1 (%s) \n", stringa2, stringa1);
    } 
    //mostro in output le lettere presenti in ambedue stringhe 
    printf("le lettere presenti in ambedue stringhe sono: ");
    for(int i=0; i<strlen(stringa1); i++){
	    for(int j=0; j<strlen(stringa2); j++){
	        if(stringa1[i] == stringa2[j]){
	            printf(" %c", stringa1[i]);
	            break;
	        }
	    }
	}
 
	return 0;
}