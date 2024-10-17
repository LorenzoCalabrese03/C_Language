#include <stdio.h>
#define SIZE 10
#include <time.h>
#include <stdlib.h>
int A[SIZE]={0};
int rand();
int max(int A[]);
int min(int A[]);
int numdisp(int);
int main() {

    srand(time(NULL));
    for(int i=0;i<SIZE;i++)
        A[i]=((rand()%500+1)+500);
    for(int j=0;j<SIZE;j++){
        printf("%d\n",A[j]);
    }
    printf("il max e': %d\n",max(A[SIZE]));
    printf("il min e': %d\n",min(A[SIZE]));


}
int max(int a[]){
    int max=0;
    max=A[1];
    for(int i=0;i<SIZE;i++){
        if(max<A[i+1]){
            max=A[i];
        }
    }
    return max;
}
int min(int b[]){
    int min=0;
    min=A[1];
    for(int i=0;i<SIZE;i++){
        if(min>A[i+1]){
            min=A[i];
        }
    }
    return min;
}

