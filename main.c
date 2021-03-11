#include <stdio.h>
#define MAX 5
#include <stdbool.h>



//funkcia na vypis pola, vypise z neho "dlzka" prvkov
int print_pole( int p[], int dlzka, int x)
{
    int i;
    int j=0;
    for (i = 0; i <=dlzka; i++){
        if(p[i]==x){

            break;
        }
        if(i==dlzka){
            p[i]=x;
            dlzka=dlzka+1;
        }
    }
    ;

    for (i = 0; i <dlzka; i++){
        printf("%d ", p[i]);


    }
    return dlzka+1;
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
    int novy_pocet_p=print_pole(prvocisla,dlzka,-5);








    return 0;
}