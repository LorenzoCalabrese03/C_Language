#include <stdio.h>
#define SIZE 15
#define SIZEM 10
//prottotipi di funzione
int mat[SIZEM][SIZEM];
void mean(const int aswer[]);
void median(int answer []);
void mode(int freq[],const int answer[]);
void bubbleSort(int a[]);
void printArray(const int a[]);
int main() {
    int frequency[10]={0};//inizializzo l'array frequency
    //inizializzo l'array response
    int response[SIZE]={0 };
    printf("inserisci i valori nella matrice\n");
    for(int i;i<SIZE;i++) {
        scanf("%d", &response[i]);
    }

    mean(response);
    median(response);
    mode(frequency,response);

}
//calcolo la media di tutte le risposte
void mean(const int answer[]){
    printf("%s\n%s\n%s\n","_______","Media","_______");
    int total=0;//variabile per contenere la somma degli elementi dell'array
    //calcola il totale dei valori delle risposte
    for (size_t j=0;j<SIZE;j++){
        total+=answer[j];
    }
    printf("La media e' data dalla media dei valori degli  \n"
           "elementi dei dati. La media e' uguale al totale degli\n"
           "elementi dei dati (%u). La media dei valori per\n"
           "questa run e' : %u / %u = %.4f\n\n",
           SIZE,total,SIZE,(double)total/SIZE);
}
//ordina l'array e determina il valore dell'elemento mediano
void median(int answer[]){
    printf("%s\n%s\n%s\n","_______","Mediana","_______\n"
            "L'array non ordinato delle risposte e': ");
    printArray(answer);//stampa l'array non ordinato
    bubbleSort(answer);//ordina l'array
    printf("%s","\n\nL'array ordinato e': ");
    printArray(answer);//stampa l'array ordinato

    //stampa l'elemento mediano
    printf("\n\nLa mediana e' l'elemento %u degli \n"
           "ordinati %u elementi dell' array.\n"
           "Per questa run la mediana e' %u\n\n",
           SIZE/2,SIZE,answer[SIZE/2]);
}
//determina la risposta più frequente
void mode(int freq[],const int answer[]){
    printf("\n%s\n%s\n%s\n","________","Moda","________");

    //inizializza la frequenza a 0
    for(size_t rating =1;rating<=9;++rating){
        freq[rating]=0;
    }
    //calcola la frequenza
    for(size_t j=0;j<SIZE;j++){
        ++freq[answer[j]];
    }
    //stampa le intestazioni per le colonne dei risultati
    printf("%s%20s%20s\n\n%55s\n%54s\n\n","Risposta",  "Frequenza",   "   |     Grafico a barre\n" , " 1   1   2   2 ","   5   0   5   0   5");
    //stampa i risultati
    int largest =0; //frequenza maggiore
    int modeValue =0;//risposta più frequente
    for(size_t rating = 1; rating<=9;++rating){
        printf("%8zu%12d             ",rating,freq[rating]);

        //cerca la moda e la frequenza maggiore
        if (freq[rating]>largest){
            largest=freq[rating];
            modeValue=rating;
        }
        //stampa la barra che rappresenta il valore della frequenza
        for (int h=1;h<=freq[rating];h++){
            printf("%s","*");
        }

        puts(" ");//nuova riga di stampa
    }
    //stampa il valore della moda
    printf("\nLa moda e' l'elemento piu' frequente\n"
           "per questa run la moda e' %d ed e' uscito %d volte.\n",
           modeValue,largest);
}
//funzione che ordina un array con l'algoritmo bubbleSort
void bubbleSort(int a[]){
    //ciclo per il numero di passate
    for(int pass=1;pass< SIZE;pass++){
        //ciclo per il numero di confronti a ogni passata
        for(size_t j=0;j< SIZE-1;++j){
            //scambia gli elementi se non sono in ordine
            if(a[j]>a[j+1]){
                int hold =a[j];
                a[j]=a[j+1];
                a[j+1]=hold;
            }
        }
    }
}
//stampa i contenuti dell'array (5 valori per riga)
void printArray(const int a[]){
    //stampa i contenuti dell'array
    for (size_t j=0;j<SIZE;j++){
        if (j%5==0){ //inizia una riga ogni 5 elementi
            puts(" ");
        }
        printf("%2d",a[j]);
    }
}
/*void stampa_matrice(const int x[]){
    for(int i=0;i<SIZEM;i++){
        for(int j;j<SIZEM;j++){
            x[i][j]=rasponse[i];
        }
    }
}*/