//Zara Luigi
//Class 3E
//Date: 21/12/2023
/*A bank wants to gather some information about the stocks held in its portfolio.
Write a C program that, after entering from the keyboard the name of the stock 
and its price, determines and displays in the output:
1) The sum of the stock prices;
2) The average of the stock prices;
3) The stock with the maximum price;
4) The stock with the minimum price;
5) The average of the stock prices with a value between 2.50 and 3.50 euros, inclusive.
The input process ends with the word "terminato" (terminated). The program should allow the re-entry of the price if it is zero or lower.*/

#include <stdio.h>
#include <string.h>

int main()
{
    //Declaration and initialization of variables
    char denominazione[50]; //The user can enter a name containing a maximum of 50 characters
    int continua;
    float prezzo; 
    float sommaPrezzi = 0;
    float mediaPrezzi = 0;
    float prezzoMax = 0, prezzoMin = 0;
    float sommaPrezziIntervallo = 0;
    float mediaIntervallo = 0;
    float mediaCount = 0;
    float countIntervallo = 0;
    //I declare a variable that I use only for the first input
    int primoInserimento = 1;
  
    //Do-while loop: The user types 2 to stop
    do{ 
        //Do-while loop: The user types a positive number; in case they enter prices < 0
        do{
            //I ask the user to enter a designation (designation = stock name)
            printf("Inserisci il nome della denominazione: ");
            scanf("%s", denominazione);
            
            //I ask the user to enter the price of the designation (designation = stock name)
            printf("Inserisci il prezzo dell'azione %s: ", denominazione);
            scanf("%f", &prezzo);
            
            //If the user has entered a negative price, I tell them to enter a positive one
            if (prezzo <= 0) {
                do{
                    printf("non puoi inserire un prezzo negativo! inserisci un prezzo positivo: ");
                    scanf("%f", &prezzo);
                }while(prezzo <= 0);
                
            }
            //Average prices within the range of 2.50 to 3.50 euros, inclusive
            if (prezzo >= 2.50 && prezzo <= 3.50) {
            sommaPrezziIntervallo = sommaPrezziIntervallo + prezzo;
            countIntervallo++;
            mediaIntervallo = sommaPrezziIntervallo / countIntervallo;
            }
            
        }while(prezzo <= 0);
        
        //Updates for each iteration
        sommaPrezzi = sommaPrezzi + prezzo;
        mediaPrezzi = mediaPrezzi + prezzo;
        //I use the variable `mediaCount` because I need it when calculating the average
        mediaCount++; 
        
        
        //Minimum price (Min)
        if (primoInserimento || prezzo < prezzoMin){
                prezzoMin = prezzo;
            }
            //Maximum price (Max)
            if (primoInserimento || prezzo > prezzoMax){
                prezzoMax = prezzo;
            }

            primoInserimento = 0; // I disable the variable because I needed it only for the first input
        
        //I ask the user if they want to enter another designation
        printf("vuoi inserire un'altra denominazione? \n (1) Si \n (2) No \n");
        printf("risposta: ");
        scanf("%d", &continua);
        if(continua < 1 || continua > 2){
            do{
                //If the user enters a number other than 1 or 2, I tell them to enter another number (1, 2)
                printf("hai inserito una scelta non valida!\n");
                printf("Scegli tra: \n (1) Si \n (2) No \n");
                scanf("%d", &continua);
            }while(continua < 1 || continua > 2);
        }
    }while(continua!= 2); 
    
    //Average prices
    if (mediaCount > 0) {
        mediaPrezzi= mediaPrezzi / mediaCount;
    }
    
    //I display the information in the output
    printf("La somma dei prezzi delle azioni è: %.2f Є\n", sommaPrezzi);
    printf("La media dei prezzi delle azioni è: %.2f Є\n", mediaPrezzi);
    printf("L’azione con il prezzo massimo è: %.2f Є\n", prezzoMax);
    printf("L’azione con il prezzo minimo è %.2f Є\n", prezzoMin);
    //I print the average of stocks in the range [2.50, 3.50] only if there are values in this range
    if(countIntervallo > 1){
         printf("La media dei prezzi delle azioni nell'intervallo [2.50, 3.50] euro è: %.2f\n", mediaIntervallo);
    }
   
    return 0;
}