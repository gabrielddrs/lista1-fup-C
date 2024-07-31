#include <stdio.h>

/*
16 - A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo, uma fatia
de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a
rodela de hambúrguer pesa 100 gramas, faça um algoritmo em que o dono forneça a quantidade de sanduíches a
fazer, e a máquina informe as quantidades (em quilos) de queijo, presunto e carne necessários para compra.
*/

int main() {
    int quantidade_sanduiches;
    const int peso_queijo = 50;    
    const int peso_presunto = 50;  
    const int peso_carne = 100;   

    printf("Quantos sanduíches deseja fazer?\n");
    scanf("%d", &quantidade_sanduiches);

    int total_queijo = quantidade_sanduiches * 2 * peso_queijo; 
    int total_presunto = quantidade_sanduiches * peso_presunto; 
    int total_carne = quantidade_sanduiches * peso_carne;       

    double total_queijo_kg = total_queijo / 1000.0;
    double total_presunto_kg = total_presunto / 1000.0;
    double total_carne_kg = total_carne / 1000.0;

    printf("Para %d sanduíches, você precisará de:\n", quantidade_sanduiches);
    printf("- %.2f kg de queijo\n", total_queijo_kg);
    printf("- %.2f kg de presunto\n", total_presunto_kg);
    printf("- %.2f kg de carne\n", total_carne_kg);

    return 0;
}
