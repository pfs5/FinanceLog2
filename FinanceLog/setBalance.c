#include <stdio.h>


/*
    Funkcija postavlja saldo na vrijednost.
*/


void setBalance (void) {

    FILE *fp;
    float balance;
    char wait;

    printf ("Novi saldo: ");
    scanf ("%f", &balance);

    fp = fopen("saldo","w+");
    fprintf (fp,"%.2f\n",balance);
    fclose(fp);

    printf ("\nIzvršeno.");
    scanf ("%c",&wait);
    scanf ("%c",&wait);
}
