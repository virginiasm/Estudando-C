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

Leitura de arquivos:

#include <stdio.h>

int main(){
    FILE *arq;

    arq = fopen("arquivos.txt","r"); //leitura

    if(arq){
        printf("Achei o arquivos");
    }else{
        printf("Não achei o arquivos");
    }

    return 0;
}

---------------
# caracter por caracter
#include <stdio.h>

int main(){
    FILE *arq;

    char c;
    arq = fopen("arquivos.txt","r"); //leitura

    if(arq){
        while(c = getc(arq) != EOF){ // EOF = END OF FILE
            printf("%c",c);
    }else{
        printf("Não achei o arquivos");
    }

    return 0;
}

-------------------------
# pega linha por linha
#include <stdio.h>

int main(){
    FILE *arq;

    char nome[10], *resultado;
    arq = fopen("arquivos.txt","r"); //leitura

    if(arq){
        while(!feof(arq)){ // feof = FILE END OF FILE
            resultado = fgets(nome,10,arq);
            printf("Resultado: %d\n",resultado);
            if(resultado){
                 printf("%s",nome);   
            }

    }else{
        printf("Não achei o arquivos");
    }

    return 0;
}
----------------
# somar

#include <stdio.h>

int main(){
    FILE *arq;
    int num, resultado, soma = 0;
    arq = fopen("arquivos.txt","r"); //leitura

    if(arq){
        while(!feof(arq)){ // feof = FILE END OF FILE
            resultado = fscanf(arq,"%d",&num);
            if(resultado ==1){
            soma = soma + num;
        }
        }
    }else{
        printf("Não achei o arquivos");
    }
    printf("A soma dos numeros encontrados é%d", soma);
    fclose(arq);
    return 0;
}