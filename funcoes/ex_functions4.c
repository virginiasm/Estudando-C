#include <stdio.h>
#include <math.h>

int quadradoPerfeito(int numero) {
    int raiz = sqrt(numero);

    if (raiz >= 0 && raiz * raiz == numero) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;

    printf("Verificar se é um quadrado perfeito.\n");
    printf("Digite o número:\n");
    scanf("%d", &numero);

    int result = quadradoPerfeito(numero);

    if (result) {
        printf("O número %d é um quadrado perfeito.\n", numero);
    } else {
        printf("O número %d não é um quadrado perfeito.\n", numero);
    }

    return 0;
}
