// Resolução da primeira parte do exercício, linhas 8,11,12,13 dedicadas á abertura do arquivo e a sua verificação, linhas 16 á 21 dedicadas a resolução do que é proposto em b e c.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    FILE *fo;
    char c;

    fo = fopen ("arq.txt","w");
    if (fo == NULL){
        return 0; 
    }

    printf ("Digite caracteres á vontade\n '0' para sair \n");
    while(c != '0'){
        scanf ("%c",&c);
        fprintf (fo,"%c",c);
    }
    fclose (fo);
}

