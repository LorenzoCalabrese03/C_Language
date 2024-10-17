#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int dupe(int x[],int y){
    for (int i = 0 ; i<SIZE;i++){
        if(x[i]==y){
            return 1;
        }
    }
    return 0 ;
}


int main() {
    int vett_duplicati[SIZE] = {1, 2, 3, 9, 4, 2, 3,8,9,3};
    int vett_non_dupe[SIZE] = {};
    for (int i = 0; i < SIZE; i++) {

            if(dupe((vett_non_dupe),vett_duplicati[i])){
            }else{
                vett_non_dupe[i]=vett_duplicati[i];
        }

}
    printf("duped: ");
    for(int loop = 0; loop < SIZE; loop++){
        if(vett_duplicati[loop]==0){
        }
        else{
            printf("%d ", vett_duplicati[loop]);
        }
    }
    printf("\n");
    printf("non duped: ");
    for(int loop = 0; loop < SIZE; loop++){
        if( vett_non_dupe[loop]==0){
        }else{
            printf("%d ", vett_non_dupe[loop]);
        }
    }
    printf("\n");
    return 0;
}
