#include <stdio.h>
#define MAX 5
#include <stdbool.h>



//funkcia na vypis pola, vypise z neho "dlzka" prvkov
int print_pole( int p[], int dlzka)
{
    int usporiadane = 1;

    int i;
    for (i = 0; i <dlzka-1; i++){
        if(p[i]>p[i+1]){
            usporiadane=0;
        }


    }
    printf("%d", usporiadane);
    return usporiadane;

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
    int prvocisla[] = {2,4,8,9};
    int dlzka = sizeof(prvocisla)/sizeof(prvocisla[0]);




    if(print_pole(prvocisla,dlzka)==1){
        printf("Pole je usporiadane");
    }else{
        printf("Pole nie je usporiadane");
    }



    return 0;
}