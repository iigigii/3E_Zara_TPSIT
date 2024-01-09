//Zara Luigi
//Class 3E
//Date: 27 Novembre 2023
//exercise number 1
/*After reading N numbers (integers), with N chosen by the user and not
exceeding 30 elements, calculate the sum and average of the even numbers
and the odd numbers (use %).*/

#include <stdio.h>
int main() {
    
    //Declaration and initialization of variables
    int Numero, i;
    int vett_numeri[30];
    int sommaPari = 0, sommaDispari = 0;
    int contaPari = 0, contaDispari = 0;
    float MediaPari;
    float MediaDispari;
    
    //I ask the user to enter a positive number N
    printf("Quanti numeri vuoi inserire? (massimo 30): ");
    scanf("%d", &Numero);
    
    //If the number entered by the user is greater than 30, the number is not within the allowed range
    if(Numero > 30)
    {
    printf("Il numero inserito è fuori dal range consentito\n");
    }
    
    //Procedure
    if(Numero<=30){
        for(i = 0; i < Numero; i++) {
            printf("Inserisci il numero %d: ", i+1);
            scanf("%d", &vett_numeri[i]);
            if(vett_numeri[i] % 2 == 0) {
                sommaPari += vett_numeri[i];
                contaPari++;
            } else {
                sommaDispari += vett_numeri[i];
                contaDispari++;
            }
        }
    }

    //even average statement
    MediaPari=sommaPari/contaPari;
    
    //odd average statement
    MediaDispari=sommaDispari/contaDispari;
    
    //I show the output results
    printf("La somma dei numeri pari è: %d\n", sommaPari);
    printf("La media dei numeri pari è: %.2f\n", MediaPari);
    printf("La somma dei numeri dispari è: %d\n", sommaDispari);
    printf("La media dei numeri dispari è: %.2f\n", MediaDispari);

    return 0;
}