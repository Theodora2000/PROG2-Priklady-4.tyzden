#include <stdio.h>
#include <stdlib.h>

int pole(int a[] ,int velkost){

    for(int i=0;i<velkost;i++){
        scanf("%d", &a[i]);

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
