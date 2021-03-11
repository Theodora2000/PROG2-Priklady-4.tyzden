#include <stdio.h>
#define MAX 5
#include <stdbool.h>



//funkcia na vypis pola, vypise z neho "dlzka" prvkov
int print_pole( int p[], int dlzka, int x)
{


    int i;
    int j=0;

    for (i = 0; i <=dlzka; i++){

        if(i==dlzka){
            p[i]=x;

        }
        j++;

    }

    for (i = 0; i <j; i++){
        printf("%d ", p[i]);


    }

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
    int prvocisla[] = {2,-5,8,-9};
    int dlzka = sizeof(prvocisla)/sizeof(prvocisla[0]);
    int i=0;
    print_pole(prvocisla,dlzka,6);








    return 0;
}