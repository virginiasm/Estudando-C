Manipulação de entradas e saídas:

Funções na biblioteca stdio.h:
fopen()= abre o arquivo
fputc()= Escreve um caracter em um arquivo
fgetc()= Lê um caracter de um arquivo
fputs()= escreve uma string em um arquivo.
fgets()= lê uma linha de um arquivo
fprintf()= Equivalente a printf()
fscanf()= Equivalente a scanf()
rewind()= Posiciona o arquivo no inicio
feof()= Retorna verdadeiro se chegou ao fim do arquivo
fclose()= fecha

Abrindo e fechando Arquivos:
r - abre um arquivo texto para leitura
w - cria um arquivo texto para escrita
a - adiciona texto ao fim de um arquivo texto
rb - Abre um arquivo binário para leitura
wb - abre um arquivo binário para escrita
ab - anexa um arquivo binário 
[r+,w+,a+]+b - O +inclui escrita ou leitura nos modos e o +b define como binário


Exemplo:

#include <stdio.h>
// FILE == ARQUIVO

int main(){
    FILE *arq;

    //fopen(nome-do-arquivos, forma-de-abertura-do-arquivo)
    //w = abrir o arquivo para escrita (se o arquivo já existir, será sobreescrito com um novo zerado)
    //r = abrir o arquivo para leitura (não podemos escrever no arquivo)
    //a = abrir o arquivo para adição de conteúdo (se  o arquivo já existir, o conteúdo será adicionado nas linhas abaixo)

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
----------------------------------------------------------------------------
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

---------------------------------------------------------------
Escrita: 

#include <stdio.h>

int main(){
    FILE *arq;
    char fruta[10];

    arq = fopen("frutas.txt", "w")

    if(arq){
        printf("Informe uma fruta, ou 0 para sair.\n");
        fgets(fruta,10,stdin); // stdin = standart input -> entrada padrão
        while(fruta[0] != '0'){
            fputs(fruta, arq);
            printf("Informe uma fruta, ou 0 para sair:\n");
            fgets(fruta,10,stdin);
        }
    }else{
        printf("Não foi possivel criar o arquivo.");
    }
    fclose(arq);
        }
        return 0;
    }
}
---------------------------------------------------------------
"a" -> se o arquivo já existe ele mandar o que está no arquivo e add novas informações, caso o arquivo não exista, ele cria o arquivo e add as informações. 

#include <stdio.h>

int main(){
    FILE *arq;
    char fruta[10];

    arq = fopen("frutas.txt", "a") //append

    if(arq){
        printf("Informe uma fruta, ou 0 para sair.\n");
        fgets(fruta,10,stdin); // stdin = standart input -> entrada padrão
        while(fruta[0] != '0'){
            fputs(fruta, arq);
            printf("Informe uma fruta, ou 0 para sair:\n");
            fgets(fruta,10,stdin);
        }
    }else{
        printf("Não foi possivel criar o arquivo.");
    }
    fclose(arq);
        }
        return 0;
    }
}

-------------------------------------------------------------------
