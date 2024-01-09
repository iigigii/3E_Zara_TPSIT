//Zara Luigi
//Class 3E
//Date: 18 dicembere 2023
//Esercizio 4
//Given a positive integer N, print the sum of the first N prime numbers alternated (one yes and one no)
#include <stdio.h>

int main() {
    
    // Declaration and initialization of variables
    int N;
    int num = 2; // I start counting from 2 because 1 is not a prime number
    int sommaPrimi = 0;
    int cont = 0; // Counter for the found prime numbers

    //Ask the user to enter a positive number, and if it is negative, ask them to re-enter it
    do {
        printf("Inserisci un numero positivo: ");
        scanf("%d", &N);
    } while (N <= 0);

    //Calculation of the sum of the first N alternating prime numbers
    while (cont < N) {
        int primo = 1; 

        //Check if num is divisible by a number between 2 and num-1
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                primo = 0; // If it is divisible, it is not prime number
                break;
            }
        }
        
        if (primo == 1) {
            cont++;
            if (cont % 2 == 1) {
                //output first prime numver
                printf("Numero primo alternato: %d\n", num);
                sommaPrimi += num;
            }
        }

        num++;
    }

    //Print the sum of the first N alternating prime numbers in the output. 
    printf("La somma dei primi %d numeri primi alternati è: %d\n", N, sommaPrimi);

    return 0;
}
