/******************************************************************************
Creare una funzione per calcolare una funzione definita così:
per m>0 allora f(n,m) = 1+f(n,m-1)
per m=0 allora f(n,m) = n
Una volta implementata, provarla e dire cosa calcola la funzione.
*******************************************************************************/
#include <stdio.h>

int f(int n,int m) {
    int x=0;
    if (m == 0){
        return n;
    }
    x=1+f(n,m-1);
    return x;
}

int main()
{
    int n1,n2;
    printf("inserisci un numero ");
    scanf("%d",&n1);
    printf("inserisci un altro numero ");
    scanf("%d",&n2);
    printf("il risultato di f e':%d",f(n1, n2));
    return 0;
}
//x=-5;x=-4;x-3;x=-2;x=-1;x=0;x=1;x=2;x=3;x=4;x=5
//y=10;y=9;y=8;y=7;y=6;y=5;y=4;y=3;y=2;y=1;y=0
