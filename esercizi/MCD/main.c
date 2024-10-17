#include <stdio.h>
int gcd(int, int);
int main() {
    int a,b;
    printf("inserisci i valori\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf ("il MCD e' :%d",gcd(a,b));
    return 0;

}
int gcd(int x,int y){
    if (y==0){
        return x;
    }
    return gcd(y,x%y);
}
