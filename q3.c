#include <stdio.h>

/*
3 - Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para
um haras.
*/

int main() {
  // Definindo constantes e variáveis
  const int ferradura_por_cavalo = 4;
  int cavalos_comprados;
  int ferraduras_necessarias;

  // Solicitação e leitura do número de cavalos comprados
  printf("Quantos cavalos foram comprados?\n");
  scanf("%d", &cavalos_comprados);

  // Cálculo do número de ferraduras necessárias
  ferraduras_necessarias = cavalos_comprados * ferradura_por_cavalo;

  // Impressão do resultado
  printf("Para os %d cavalos, serão necessárias %d ferraduras.\n",
         cavalos_comprados, ferraduras_necessarias);

  return 0;
}
