Manipulação de entradas e saídas

Exemplo:

#include <stdio.h>
// FILE == ARQUIVO

int main(){
    FILE *arq;

    //fopen(nome-do-arquivos, forma-de-abertura-do-arquivo)
    //w = abrir o arquivo para escrita (se o arquivo já existir, será sobreescrito com um novo zerado)
    //r = abrir o arquivo para leitura (não podemos escrever no arquivo)
    //wa = abrir o arquivo para adição de conteúdo (se  o arquivo já existir, o conteúdo será adicionado nas linhas abaixo)

    arq = fopen("arquivos.txt", "w");

    //sempre que a gente finalizar a manipulação de arquivos, devemos fechar. 
    fclose(arq);

    return 0;
}