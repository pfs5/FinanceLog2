#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Funkcija ispisuje sve transakcije
*/





void listEntries(void) {

    FILE *fp;
    int i,j,k=1;
    char ulaz [200];
    char opisTroska [100];
    char wait;
    float trosak;
    float trenutnoStanje;

    char prviDio [100];
    char drugiDio [100];
    char treciDio [100];

    fp = fopen ("troskovi","r");
    while (fgets(ulaz,200,fp)) {

        //Razdvajanje
        for (i=0,j=0;ulaz[i]!='#';i++,j++)
            prviDio[j]=ulaz[i];

        for (i=i+1,j=0;ulaz[i]!='#';i++,j++)
            drugiDio[j]=ulaz[i];

        for (i=i+1,j=0;i<strlen(ulaz);i++,j++)
            treciDio[j]=ulaz[i];

        //Ispis
        printf ("%d)  -%s    ::      total: %s       ::      %s",k,prviDio,drugiDio,treciDio);
        k++;

    }

    fclose(fp);

    printf ("\nIzvršeno.");
    scanf ("%c",&wait);
    scanf ("%c",&wait);

}
