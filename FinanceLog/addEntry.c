#include <stdio.h>

/*
    Funkcija dodaje novu transakciju
*/

void addLine (void) {

    FILE *fp, *fp2;
    float trosak;
    float trenutnoStanje;
    char opisTroska [100];
    char wait;

    printf ("Iznos: ");
    scanf ("%f",&trosak);
    printf ("\nOpis: ");
    scanf ("%c",&wait);
    fgets (opisTroska,100,stdin);


    fp = fopen ("saldo","r+");
    fscanf(fp,"%f",&trenutnoStanje);
    trenutnoStanje-=trosak;
    fclose (fp);

    fp = fopen ("saldo","w+");
    fprintf (fp,"%f",trenutnoStanje);
    fclose (fp);

    fp2 = fopen ("troskovi","a+");
    fprintf (fp2,"%.2f#%.2f#%s",trosak,trenutnoStanje,opisTroska);
    fclose(fp2);



    printf ("\nIzvršeno.");
    scanf ("%c",&wait);

}
