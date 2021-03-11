#include <stdio.h>
#define MAX 5
#include <stdbool.h>



//funkcia na vypis pola, vypise z neho "dlzka" prvkov
int print_pole( int p[], int dlzka)
{


    int i;
    int j=dlzka-1;

    for (i = 0; i <dlzka; i++){
        int tmp = p[i];
        p[i]=p[j];
        p[j]=tmp;
        if(i+1==dlzka/2){
            break;
        }
        j--;


    }

    return p;

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
    print_pole(prvocisla,dlzka);
    for (i = 0; i <dlzka; i++){
        printf("%d ", prvocisla[i]);


    }







    return 0;
}