#include <stdio.h>
#define SIZE 7
char mat[SIZE][SIZE];
int main() {
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            mat[i][j]=' ';
        }
    }
    mat[0][3]='*';

    for(int i=0;i<SIZE;i++){
        for (int j=0;j<SIZE-1;j++){
            if (j==SIZE/2+i||j==i-SIZE/2||j==SIZE/2-i||j==SIZE/2+(SIZE-i-1)){
                mat[i][j]='*';
            }
        }
    }
    for(int j=0;j<SIZE;j++){
        mat[3][j]='*';
    }
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%2c",mat[i][j]);
        }
        printf("\n");
    }
}
