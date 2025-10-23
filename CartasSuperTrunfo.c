#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

  // Área para definição das variáveis para armazenar as propriedades das cidades

int main() {
    int população;
    float PIB;
    char carta[50];
    float area_m²;
    int pontos_turísticos;
    char estado;
    char cidade[50];
    
    // area pra exibicao dos dados da cidade
  
    printf("Qual e a população?: ", população);
    scanf("%d\n" , & população);
    
    printf("Qual e o PIB:  ", PIB);
    scanf("%f\n",& PIB);
    
    printf("qual e a carta?:  ", carta);
    scanf("%s\n" , & carta);
    
    printf("Qual e a area em m²?:  ", area_m²);
    scanf("%f\n",& area_m²);
    
    printf("Quantos pontos turistico?:   ", pontos_turísticos);
    scanf("%d\n" ,& pontos_turísticos);
    
    printf("Qual e o estado?:  ", estado);
    scanf("%s\n",& estado);
    
    printf("Qual e a cidade?:  ", cidade);
    scanf("%s\n" ,& cidade);
   
    
    
    
    
    return 0;
}
  
