/* Escreva um programa que:
    (a) Crie/abra um arquivo texto de nome "arq.txt"
    (b) Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário entre com o caractere '0'
    (c) feche o arquivo

    Agora, abra e leia o arquivo, caractere por caracter, e escreva na tela todos os caracteres armazenados.
*/
#include <stdio.h>

int main(){
    FILE *arq;
    char caractere;

    arq = fopen("arq.txt","w");

    if(arq==NULL){
        printf("Error ao abrir arquivo.\n");
        return 1;
    }
    printf("Digite um caractere (ou 0 para sair):\n");
    while(1){ 
        scanf("%c",&caractere); 
        if (caractere == '0'){
            break;
        }
        fputc(caractere, arq);
    }
    fclose(arq);

    // Agora, abra e leia o arquivo, caractere por caracter, e escreva na tela todos os caracteres armazenados.
    arq = fopen("arq.txt","r");
    if(arq == NULL){
        printf("Error ao abrir arquivo.\n");
        return 1;
    }

    printf("Conteudo do arquivo:\n");

    while((caractere = fgetc(arq)) != EOF){
        putchar(caractere);
    }
    fclose(arq);
    return 0;
}