//Escreva um programa que:
//(a) Crie/abra um arquivo texto de nome “arq.txt”
//(b) Permita que o usuario grave diversos caracteres nesse arquivo, até que o usuário entre com o caractere ‘0’
//(c) Feche o arquivo
//Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados.

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

//Modificação do código necessária para abrir o arquivo e ler o mesmo.

 fo = fopen ("arq.txt","r");
    if (fo == NULL){
        return 0; 
    }

  while(!feof(fo)){
    fscanf (fo,"%c",&c);
    printf ("%c",c);
  }
fclose(fo);
}

