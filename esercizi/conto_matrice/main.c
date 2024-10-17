#include <stdio.h>
#define SIZE 9
int main() {
    int c=0;
    int A[SIZE]={1,2,3,4,5,1,2,3,4};
    int B[SIZE];

    int cont_b=0;
    B[0] = A[0];
    cont_b=2;

    for(int i=1;i<SIZE;i++)
    {
        for(int j = 0; j < cont_b;j++){
            if(A[i] != B[j])
                break;

            cont_b++;
            B[cont_b] = A[i];
        }
    }
    for(int i=0;i<SIZE;i++){
        printf("%d  ",B[i]);
    }

}

