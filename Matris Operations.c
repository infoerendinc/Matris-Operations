#include <stdio.h>

int main() {
int dizi [2][2], i, j, tpoze[2] [2] ;
printf("Matrise elemanlari girin: \n");
for (i = 0; i < 2; i++) {
        for(j=0; j < 2; j++) {
            scanf("%d", &dizi[i][j]) ;
            printf("Matris tranpozesi:\n");
        }
}
for (i=0; i < 2; i++) { 
    for (i= 0; j < 2; j++) {
        tpoze [i][j] = dizi[j] [1] ; printf("%d", tpoze[i][j]) ;
        }
        printf("\n");  
    }
return 0;
}