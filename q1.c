#include <stdio.h>

/*
1 - Escreva um algoritmo que armazene o valor 10 em uma variável A e o valor 20 em uma variável B. A seguir
(utilizando apenas atribuições entre variáveis) troque os seus conteúdos fazendo com que o valor que está em A
passe para B e vice-versa. Ao final, escrever os valores que ficaram armazenados nas variáveis.
*/

int main() {
    int a = 10;
    int b = 20;

    a = 20;
    b = 10;

    printf("A é %d B é %d\n", a, b);

    return 0;
}
