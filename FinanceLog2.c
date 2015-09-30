#include <stdio.h>
#include <time.h>

/*
    Vodjenje evidencije o troskovima.



*/



//Funkcije

void reset () {

FILE *fp;
int saldo = 0;


fp = fopen ("financelog2.data","w");
fprintf (fp,"%d",saldo);
fclose (fp);

}


void unos () {

    FILE *fp, *sp;
    float saldo;
    float iznos;
    char datum [20];
    char opis [50];
    char dummy;

    time_t curTime;
    curTime = time(NULL);

    //Ucitaj saldo
    sp = fopen ("financelog2.data","r");
    fscanf (sp,"%f",&saldo);
    fclose (sp);


    //Dodaj unos
    fp = fopen ("financelog.data","a");

    printf ("Iznos: ");
    scanf ("%f",&iznos);
    scanf ("%c",&dummy);
    printf ("\nOpis: ");
    fgets (opis,100,stdin);
    strtok(opis, "\n");


    fprintf (fp,"%.2f#%s#%s", iznos, opis, ctime(&curTime));
    fclose (fp);


    //Promijeni saldo
    saldo+=iznos;
    sp = fopen ("financelog2.data","w");
    fprintf (sp,"%f",saldo);
    fclose (fp);


}








//Glavni program



int main (void) {

    //Varijable
    int input;

    while (1) {

    //Meni
    system ("clear");
    printf ("0. Reset\n");
    printf ("1. Unos\n");
    scanf ("%d", &input);


    //Pozivanje funkcija
    switch (input) {
        case 0:
            reset();
            break;
        case 1:
            unos();
            break;
    }
    }

}
