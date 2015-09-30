#include <stdio.h>

/*
    Funkcija pribraja vrijednost trenutnom saldu
*/

void addBalance (void) {

    FILE *ulaz, *izlaz;
    float trenutnoStanje;
    float vrijednost;
    char wait;

    //Unos vrijednosti
    printf ("Vrijednost: ");
    scanf ("%f", &vrijednost);

    //Čitanje trenutnog salda
    ulaz = fopen ("saldo","r+");
    fscanf (ulaz,"%f",&trenutnoStanje);
    fclose (ulaz);

    //Pribrajanje i spremanje novog stanja
    trenutnoStanje+= vrijednost;
    izlaz = fopen ("saldo","w+");
    fprintf (izlaz,"%.2f\n",trenutnoStanje);
    fclose (izlaz);

    printf ("Izvršeno.\n");
    printf ("Novi saldo: %.2f",trenutnoStanje);
    scanf ("%c",&wait);
    scanf ("%c",&wait);

}
