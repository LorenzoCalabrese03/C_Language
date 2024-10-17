/*date 2 parole insieme da tastiera, scoprire se sono uguali o diverse*/
#include <stdio.h>
#define SIZE 100
int main() {
    char a[SIZE];
    char b[SIZE];
    printf("inserisci la prima parola: ");
    scanf("%s", a);
    printf("inserisci la seconda parola: ");
    scanf("%s", b);
    int i = 0, f;

    for (; i < SIZE; i++) {
        if ((a[i] == '\0') && (b[i] == '\0')) {
            printf("stop!\n Le parole sono uguali\n");
            break;
        }
        if (a[i] != b[i]) {
            printf("le parole sono diverse");
            f = 1;
            break;
        }

    }
}
