#include <stdio.h>
#define MAX 10



//funkcia na vypis pola, vypise z neho "dlzka" prvkov
void print_pole(const int p[], int dlzka)
{
    int i;
    for (i = 0; i < dlzka; i++)
        printf("%i\n", p[i]);
}

//funkcia naplni pole postupnostou cisel
void napln(int p[], int dlzka)
{
    int i;
    for (i = 0; i < dlzka; i++)
        p[i] = i+1;
}

int main()
{
    int pole[MAX] = {0};
    int prvocisla[] = {2,3,5,7,11,13,17,19};
    int dlzka = sizeof(prvocisla)/sizeof(prvocisla[0]);

    //print_pole(prvocisla, dlzka);

    printf("-------------------\n");

    //pouzitie s globalnym polom
    dlzka = MAX;
    printf("-------------------\n");
    print_pole(pole,dlzka/2);
    napln(pole,2*dlzka);
    printf("-------------------\n");
    print_pole(pole,dlzka);
    printf("-------------------\n");
    //print_pole(pole, dlzka);


    return 0;
}