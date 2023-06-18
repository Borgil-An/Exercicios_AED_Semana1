//Faça um programa que receba do usuario um arquivo texto e mostre na tela quantas letras sao vogais.
// Linhas 12 á 14 dedicadas a abertura do arquivo para somente leitura do mesmo
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    FILE *fo;
    char c;
    int x = 0;
    
    fo = fopen ("arq.txt","r");
    if (fo == NULL){
        return 0; 
    }

  while(!feof(fo)){
    fscanf (fo,"%c",&c);
    if (c == 'a' || c == 'e'|| c == 'i'|| c == 'o'|| c == 'u'||
        c == 'A' || c== 'E' || c== 'I' || c== 'O' || c== 'U'){
        x = x + 1;
    }
  }
  printf ("O arquivo possue: %d vogais",x);
fclose(fo);
}


