#include <stdio.h>
#define MAX 5
#include <stdbool.h>



//funkcia na vypis pola, vypise z neho "dlzka" prvkov
int print_pole( int a[], int b[], int dlzka)
{
    int suma=0;
    for (int i = 0; i <=dlzka; i++){
       suma =suma + (a[i]*b[i]);
    }


    return suma;
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
    int prvocisla[] = {1,3,-4};
    int prvocisla1[] = {4,-2,-1};
    int dlzka = sizeof(prvocisla)/sizeof(prvocisla[0]);
    int i=0;
    int novy_pocet_p=print_pole(prvocisla,prvocisla1,3);
    printf("%d", novy_pocet_p);







    return 0;
}