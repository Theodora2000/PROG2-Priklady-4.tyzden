#include <stdio.h>
#define MAX 5



//funkcia na vypis pola, vypise z neho "dlzka" prvkov
int print_pole( int p[], int dlzka)
{

    int i;
    for (i = 0; i <dlzka-1; i++){
        if(p[i]>p[i+1]){
            int tmp = p[i];
            p[i] = p[i+1];
            p[i+1]=tmp;

        }


    }
    int max_druhy=0;
    for (i = 0; i < dlzka; i++){
        printf("%d ", p[i]);
        max_druhy=p[i-1];
    }

    return max_druhy;

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
    int prvocisla[] = {2,8,4,6,7};
    int dlzka = sizeof(prvocisla)/sizeof(prvocisla[0]);


    dlzka = MAX;

    printf("\nDruhy maximum %d ",print_pole(prvocisla,dlzka));



    return 0;
}