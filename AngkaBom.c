#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int min = 1, max = 100, tebak = 0, loop = 1;
    srand(time(NULL));
    int bom = rand() % 100 + 1;
    for (;;){

        printf ("Tebak angka bom dengan range %d - %d: ", min, max);
        scanf ("%d", &tebak);
        if (tebak <= min || tebak >= max){
            printf ("Tebakan tidak masuk range\n\n");
        } else if (tebak < bom){
            printf ("\nAngka Bom lebih besar\n\n");
            min = tebak;
            loop++;
        } else if (tebak > bom){
            printf ("\nAngka Bom lebih kecil\n\n");
            max = tebak;
            loop++;
        } else if (tebak == bom) {
            printf ("\nTebakan anda benar!!!\n");
            printf ("Anda menebak sebanyak %d kali", loop);
            break;
        }
    }
    return 0;
}