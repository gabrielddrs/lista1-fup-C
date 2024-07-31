#include <stdio.h>

/*
31 - Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:

(a) a idade dessa pessoa em anos;

(b) a idade dessa pessoa em meses;

(c) a idade dessa pessoa em dias;

(d) a idade dessa pessoa em semanas.
*/

int main() {
    int ano_atual, ano_nascimento;
    int idade_em_ano, idade_em_mes, idade_em_dia, idade_em_semana;

    printf("Qual o ano atual?\n");
    scanf("%d", &ano_atual);

    printf("Qual o ano de seu nascimento?\n");
    scanf("%d", &ano_nascimento);

    idade_em_ano = ano_atual - ano_nascimento;
    idade_em_mes = idade_em_ano * 12;
    idade_em_dia = idade_em_ano * 365;
    idade_em_semana = idade_em_ano * 52;

    printf("\nSua idade em anos é %d anos\n", idade_em_ano);
    printf("Sua idade em meses é %d meses\n", idade_em_mes);
    printf("Sua idade em dias é %d dias\n", idade_em_dia);
    printf("Sua idade em semanas é %d semanas\n", idade_em_semana);

    return 0;
}
