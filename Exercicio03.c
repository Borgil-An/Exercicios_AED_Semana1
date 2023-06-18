//Faca um programa que leia o conteudo de um arquivo e crie um arquivo com o mesmo 
//conteudo, mas com todas as letras minusculas convertidas para maiusculas. Os nomes dos arquivos serao fornecidos, via teclado, pelo usuario.

// Linhas 15 á 21 dedicadas a abertura de arquivo, o primeiro somente para leitura e o segundo para gravação, dentro do while que percorre o arquivo de leitura uso a função fornecida pela biblioteca
// ctype.h para transformar as letras em maiusculas assim como pede o exercicio e gravo no arquivo de inserção.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (void){
    FILE *fp,*fo;
    char c;

    fp = fopen ("arq.txt","r");
    if (fp == NULL){
        return 0;
    }
    fo = fopen ("arqSaida.txt","w");
    if (fo == NULL){
        return 0;
    }
    while (!feof(fp)){
        fscanf (fp,"%c",&c);
        fprintf (fo,"%c",toupper(c));
    }
    fclose(fo);
    fclose(fp);
}

