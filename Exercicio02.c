//Faça um programa que receba do usuario um arquivo texto e mostre na tela quantas letras sao vogais.
// Linhas 12 á 14 dedicadas a abertura do arquivo para somente leitura do mesmo, linhas 19 e 20 percorrem o arquivo e leem os caracteres presentes nele, a linha 21 á 23 é um if para ver se o caracterido lido é uma vogal
// e caso isso true somara um á contagem de vogais presentes no arquivos, quando o arquivo for completamente lido o programa fara um prinf com o valor total de vogais presentes.


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


