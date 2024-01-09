//Zara Luigi
//Class 3E
//Date: 13 dicembere 2023
//exercise number 2
/*You want to apply a discount to a sum of money (related to the purchase of a product) based on the entered amount following the following scheme:
            from 0 to €500, a discount of 10%;
            from €501 to €1000, a discount of 20%;
            over €1001, a discount of 30%.
The program, after calculating and displaying the discount and the net price, should allow for the input of additional sums of money*/

#include <stdio.h>
int main() {

    //Variable declaration and initialization
    int prezzo;
    int sconto;
    int scelta;
    int prezzoFinale10, prezzoFinale20, prezzoFinale30;
    
    //Do-while loop: The customer enters 2
    do {
        
    //I ask the user to input a price
        printf("Inserisci un prezzo: ");
        scanf("%d",& prezzo);

    //If the price is less than or equal to 500:
        
        if(prezzo <=500){

        sconto= (prezzo*10)/100;
        prezzoFinale10= prezzo-sconto;
        
        printf("\n");
        printf("Scontrino: \n");
        printf("Prezzo iniziale: %d €  \n", prezzo);
        printf("lo sconto è: %d €\n", sconto);
        printf("il prezzo finale è: %d €\n", prezzoFinale10);
        
        //If the price is greater than or equal to 501:
    } else if(prezzo>=501 || prezzo<=1001){
        
        sconto= (prezzo*20)/100;
        prezzoFinale20= prezzo-sconto;
        
        printf("\n");
        printf("Scontrino: \n");
        printf("Prezzo iniziale: %d €\n", prezzo);
        printf("lo sconto è: %d€ \n", sconto);
        printf("il prezzo finale è: %d €\n", prezzoFinale20);
        
    } else {
        //If the price is greater than 1002:
        sconto= (prezzo*30)/100;
        prezzoFinale30= prezzo-sconto;
        
        printf("\n");
        printf("Scontrino: \n");
        printf("Prezzo iniziale: %d €\n", prezzo);
        printf("lo sconto è: %d €\n", sconto);
        printf("il prezzo finale è: %d €\n", prezzoFinale30);
    
    }
    
        printf("\n");   
        //I ask the user if they want to input another price
        printf("Vuoi inserire un'altro prezzo? Digita 1=SI - Digita 2=NO: ");
        scanf("%d", &scelta);
        
    }while(scelta!=2 );
        
    return 0;
}