#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblio.h"

main(){
  int valor = 0, genero, tipo;
  char numext[255] = "";
  system("clear");
  printf("Digite um valor entre 0 e 999.999.999: ");
  scanf("%i", &valor);
  getchar();
  if(valor < 0 || valor > 999999999){
    while (valor < 0 || valor > 999999999) {
      printf("Valor inválido, digite novamente: ");
      scanf("%i", &valor);
      getchar();
    } //Escreve inválido
    system("clear");
    printf("Digite um valor entre 0 e 999.999.999: %i\n", valor);
  }
  printf("\nDigite o tipo\n[0] - Cardinal\n[1] - Ordinal\nTipo: ");
  scanf("%i", &tipo);
  if(tipo != 0 && tipo != 1){
    while(tipo != 0 && tipo != 1){
      printf("\nTipo inválido, digite novamente\n[0] - Cardinal\n[1] - Ordinal\nTipo: ");
      scanf("%i", &tipo);
      getchar();
    }
    system("clear");
    printf("Digite um valor entre 0 e 999.999.999: %i\n", valor);
    printf("\nDigite o tipo\n[0] - Cardinal\n[1] - Ordinal\nTipo: %i\n", tipo);
  }
  printf("\nDigite o gênero\n[0] - Masculino\n[1] - Feminino\nTipo: ");
  scanf("%i", &genero);
  getchar();
  if(genero != 0 && genero != 1){
    while(genero != 0 && genero != 1){
      printf("\nGênero inválido, digite novamente\n[0] - Masculino\n[1] - Feminino\nTipo: ");
      scanf("%i", &genero);
      getchar();
    }
    system("clear");
    printf("Digite um valor entre 0 e 999.999.999: %i\n", valor);
    printf("\nDigite o tipo\n[0] - Cardinal\n[1] - Ordinal\nTipo: %i\n", tipo);
    printf("\nDigite o gênero\n[0] - Masculino\n[1] - Feminino\nTipo: %i\n", genero);    
  }
  inter(valor, numext, genero, tipo);
  printf("Número por extenso: %s", numext);
  getchar();
}