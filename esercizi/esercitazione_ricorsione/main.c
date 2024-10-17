#include <stdio.h>
int f(int);
int main() {
    int a=f(115);
    printf("la x e': %d",f(a));
}
int f(int x){
    if (x<2){
        return x;
    }
    else{ ((x/x-1)*f(x-2));
    }
}
