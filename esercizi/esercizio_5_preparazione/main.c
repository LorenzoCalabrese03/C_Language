#include <stdio.h>
float f(float);
float f2(float);
int counter=0;
int main() {
    puts("");

    printf ("il valore per ricorsione e':%f\n",f(9));
    printf(" il counter: %d\n",counter);
    printf("il valore per iterazione e':%f",f2(9));
}
float f(float a){
    float x=0;
    if (a==0||a==1) {
        return a;
    }
    counter++;
    x=((a/(a-1))*f(a-2));
    return x;

}

float f2(float x){
    float i=1;
    float c=i*((i+2)/(i+1));
    if((int)x%2==0){
        return 0;
    }else{
        for(i=3;i<x;i+=2){
            c*=((i+2)/(i+1));
        }
    return c;
    }
}
