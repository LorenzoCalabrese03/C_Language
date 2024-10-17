#include <stdio.h>
int f(int);
int main() {
    int a;//15
    do{
        printf("inserisci un valore decente coglione:\n");
        scanf("%d",&a);
    }while(a<10||a>99);
    printf("e' %d",f(a));
}
int f(int x){
    int k=0,r=0,somma=0;
    k=x/10;
    r=(x%10)/1;
    somma=k+r;
    if(somma<10){
        return somma;
    }
        return f(somma);

}