#include <stdio.h>
#include <stdlib.h>

int f(int num);

int main() {//
// Mainint
    int a = 100101;
    int b;
    b = f(a);
    return b;
}

int f(int num) {
    int x=0;
    if ((num / 10) == 0){
        return (num);
    }
    x=(num % 10 + f((num / 10))*2);
    return x;
}
//10%10=0; 0+1*2
//100%10=0; 0+2*2=4
//1001%10=1; 1+4*2=9
//10010%10=0; 0+9*2=18
//100101%10=1; 1+18*2=37