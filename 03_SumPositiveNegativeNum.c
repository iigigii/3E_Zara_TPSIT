//Zara Luigi
//Class 3E
//Date: 18 dicembere 2023
//exercise number 3
/*Write a C program that, after reading N numbers (N chosen by the user),
calculates and displays on the screen the sum of positive numbers, the sum of 
absolute values of negative numbers, the count of negative and positive numbers,
and the average of positive and negative numbers*/

#include <stdio.h>
int main() {

    //Declaration and initialization of variables
    int qtaNumeri;
    int numeri;
    
    int numeriPositivi, numeriNegativi;
    int sommaPositivi, sommaNegativi;
    float mediaPositivi, mediaNegativi;
    
    //I ask the user how many numbers they want to input
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &qtaNumeri);
    
    //For loop
    for(int i=0; i<qtaNumeri; i++){
        
        //I ask the user to input the numbers
        printf("inserisci il numero %d: ", i+1);
        scanf("%d", &numeri);
        
        //If the numbers are greater than 0
        if(numeri>0){
            numeriPositivi++;
            sommaPositivi = sommaPositivi + numeri;
            mediaPositivi = sommaPositivi / numeriPositivi;
            
        //If the numbers are less than 0
        } else if(numeri<0){
            numeriNegativi++;
            sommaNegativi = sommaNegativi + numeri ;
            mediaNegativi = sommaNegativi / numeriNegativi;
        }
    }
    
        //new paragraph 
        printf("\n");
        
        //I print the output of how many numbers are positive and negative
        printf("Numeri positivi: %d \n", numeriPositivi);
        printf("Numeri negativi: %d \n", numeriNegativi);
        
        //new paragraph 
        printf("\n");
        
        //I print the output of the sum of positive and negative numbers (absolute value)
        printf("La somma dei numeri positivi è: %d \n", sommaPositivi);
        printf("La somma dei numeri negativi in valore assoluto è %d \n", sommaNegativi*(-1));
        
        //new paragraph 
        printf("\n");
        
        //I print the output of the average of positive and negative numbers
        printf("La media dei numeri positivi è: %.2f \n", mediaPositivi);
        printf("La media dei numeri negativi è %.2f \n", mediaNegativi*(-1));
        
    return 0;
}