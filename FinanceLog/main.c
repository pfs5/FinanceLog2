#include <stdio.h>
#include "header.h"
#include <unistd.h>
#include <stdlib.h>


void test (void) {

char str[100];
fgets (str,100,stdin);
fgets (str,100,stdin);
printf ("%s",str);
system ("sleep 1");

}

int main()
{

    //Varijable
    int odabir;
    char potvrda;
    char idle;
    int izlaz=0;

    while (1)
    {
        system ("clear");

        //Meni
        printf ("1.    Postavi saldo.  \n");
        printf ("2.    Promijeni saldo.  \n");
        printf ("3.    Ispiši saldo.  \n");
        printf ("4.    Dodaj trošak.  \n");
        printf ("5.    Ispiši troškove.  \n");
        printf ("6.    Izlaz. \n");

        printf ("\n");

        printf ("Odabir: ");
        scanf ("%d",&odabir);

        //Izvršavanje odabira
        switch (odabir)
        {
            case 0 :
                test();
                break;
            case 1 :
                setBalance();
                break;

            case 2 :
                addBalance();
                break;

            case 3 :
                printBalance();
                break;

            case 4 :
                addLine();
                break;

            case 5 :
                listEntries();
                break;

            case 6 :
                izlaz = 1;
                break;
        }


        //Obriši ekran
        clr();
        if (izlaz == 1)
            break;


    }




    return 0;
}


void clr (void) {
        printf("\e[1;1H\e[2J");
}



