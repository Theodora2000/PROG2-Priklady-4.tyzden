#include <stdio.h>
#include <stdlib.h>

int pole(int a[] ,int velkost){
    int i=0;
    int cislo=0;
    while (velkost!=0){

        scanf("%d", &a[i]);

        if(a[i]<0){
            continue;
        }
        i++;
        velkost--;

    }

    return a;

}

int main() {

    //int a[]={};

    int velkost = 0;
    scanf(" %d", &velkost);
    int a[velkost];

    pole(a, velkost);
    for(int i=0;i<velkost;i++){
        printf("%d ", a[i]);
    }
    printf("Sizeof: %d", sizeof (a)/sizeof(a[0]));

    return 0;
}
