#include <stdio.h>

#define SIZE 5

int somma_totale (int[],int[]);
int somma_posizioni(int[],int[]);
int main( )
{
    int a[SIZE]={1,3,5,7,9};
    int b[SIZE]={2,4,6,8,10};
    printf("stampa somma vettoriale\n");
    somma_totale(a,b);
    somma_posizioni(a,b);
    //printf(somma(a,b));
}
int somma_totale(int a[],int b[]){
    int somma=0;
    for(int i=0;i < SIZE; i++){
        somma+=(a[i]+b[i]);
    }
    printf("%d\n",somma);

}
int somma_posizioni(int a[],int b[]){
    int c[SIZE]={0};
    printf("la somma di ogni singola posizione e',\n");
    for(int i=0;i<SIZE;i++){
        c[i]=(a[i]+b[i]);

        printf("in posizione %d: %d \n",i,c[i]);
    }

}