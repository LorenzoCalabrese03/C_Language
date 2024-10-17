#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10
int ordinamento(int[]);
int genera_vettore(int[]);
int controllo_dup(int [],int []);
void stampa_senza(int [],int []);
int main() {
    srand(time(NULL));
    int A[SIZE]={};
    genera_vettore(A);
    printf("vett:");
    for(int i=0;i<SIZE;i++){
        printf(" %d,",A[i]);
    }
    puts(" ");
    int B[SIZE]={0};
    controllo_dup(A,B);
    stampa_senza(B,A);
}
int genera_vettore(int X[]){
    for(int i=0;i<SIZE;i++){
        X[i]=rand()%10;
    }
    ordinamento(X);
    return X;
}
int ordinamento(int y[]){
    int com=0;
    for(int i=0;i<SIZE;i++){
        for (int j = 0; j < SIZE-1; j++) {
            if(y[j]>y[j+1]){
                com=y[j];
                y[j]=y[j+1];
                y[j+1]=com;
            }
        }
    }
    return y;
}
int controllo_dup(int Z[],int X[]){
    int f=0;
    for(int i=0;i<SIZE;i++){
        if(Z[i]!=Z[i+1]){
            X[f]=Z[i];
            f++;
        }
    }
    return X;
}
void stampa_senza(int X[],int Y[]){
    printf("vett senza:");
    for(int i=0;i<SIZE;i++){
        printf(" %d,",X[i]);
        if(X[i]==Y[SIZE-1]){
            break;
        }
    }
}