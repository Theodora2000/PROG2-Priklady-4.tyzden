#include <stdio.h>
#include <stdlib.h>

int pole(int a[] ,int velkost){

    for(int i=0;i<velkost;i++){
        a[i] = i*i;

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
    printf("Sizeof: %d", sizeof (a));

    return 0;
}
