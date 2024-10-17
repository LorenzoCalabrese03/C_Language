/*popolare un vettore di 100 numeri interi con valori casuali compresi tra -100 e 100, contare e sommare i primi elementi fino
 * ad ottenere un valore maggiore o uguale a 200. Stampare il numero di elementi sommati*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
int main() {
    srand(time(NULL));
    int V[SIZE]={0};
    int somma=0;
    for(int i=0;i<SIZE;i++){
        V[i]=((rand()%201)-100);
    }
    for (int I=0;I<SIZE;I++){
        somma+=V[I];
        if (somma>=200) {
            printf("la somma e':%d", somma);
            break;
        }


    }
    if(somma<200){
        printf("la condizione non e' stata soddisfatta");
    }
}
