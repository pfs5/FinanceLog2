#include <stdio.h>

/*
    Funkcija ispisuje trenutni saldo
*/

void printBalance(void) {

    FILE *fp;
    char wait;
    float trenutnoStanje;

    fp = fopen ("saldo","r");
    fscanf(fp,"%f",&trenutnoStanje);
    fclose(fp);

    printf ("Trenutno stanje: %.2f",trenutnoStanje);

    scanf ("%c",&wait);
    scanf ("%c",&wait);

}
