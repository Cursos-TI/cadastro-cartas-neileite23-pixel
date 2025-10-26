# Desafio Super Trunfo - Países - Cadastro das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! No jogo Super Trunfo, os jogadores comparam as propriedades das cartas para determinar a mais forte. O tema deste Super Trunfo é "Países," onde você comparará as propriedades das cidades.

A empresa MateCheck contratou você para desenvolver a parte inicial do jogo, que consiste no cadastro das cartas.

O desafio está dividido em três níveis: Novato, Aventureiro e Mestre, com cada nível adicionando mais complexidade ao anterior. Você deve escolher qual desafio quer realizar.

### 🚨 Atenção: 
O nível Novato do desafio é focado apenas no cadastro das cartas, utilizando as funções scanf para ler os dados e printf para exibi-los.
#include <stdio.h> 


     //-----------_// declarando variavel dacarta_1///----------
     
     int main(void) { 
         char estado_carta1;
         char código_carta1[30];
         char cidade_carta1[30];
         int população_carta1;
         float area_km²_carta1;
         float PIB_carta1;
         int pontos_turísticos_carta1;
         
   //// --------------declarando variavel carta_2--------///
         
         char estado_carta2;
         char código_carta2[30];
         char cidade_carta2[30];
         int população_carta2;
         float area_km²_carta2;
         float PIB_carta2;
         int pontos_turísticos_carta2;
         
         ///  //-------------cadastro de dados carta 1----------//
         
         printf(" ---- cadastro de carta 1----\n");
         printf("Estado (A a H): ");
         scanf(" %c", &estado_carta1);
         
         printf("Codigo: ");
         scanf("%s", &código_carta1);
         
         printf("Cidade: ");
         scanf("%s",&cidade_carta1);
         
         printf("População: ");
         scanf("%d",&população_carta1);
         
         printf("Area km²: ");
         scanf("%f",&area_km²_carta1);
         
         printf("PIB: ");
         scanf("%f",&PIB_carta1);
         
         printf("Pontos turísticos:");
         scanf ("%d",&pontos_turísticos_carta1);
         
         ///--------- area  cadastro de carta 2---------//////
           
           
         printf(" ---- cadastro de carta 2----\n");
         printf("Estado (A a H): ");
         scanf(" %c", &estado_carta2);
         
         printf("Codigo: ");
         scanf("%s", &código_carta2);
         
         printf("Cidade: ");
         scanf("%s",&cidade_carta2);
         
         printf("População: ");
         scanf("%d",&população_carta2);
         
         printf("Area km²: ");
         scanf("%f",&area_km²_carta2);
         
         printf("PIB: ");
         scanf("%f",&PIB_carta2);
         
         printf("Pontos turísticos:");
         scanf ("%d",&pontos_turísticos_carta2);
           
           
         /// exibir dados da carta 1//
         
         printf("--- Cartas Cadastradas ---\n");
        
         printf("\n--- CARTA 1 (%s) ---\n", código_carta1);
         printf("Estado: %c\n", estado_carta1);
         printf("Cidade: %s\n", cidade_carta1);
         printf("População: %d\n", população_carta1);
         printf("Área: %.2f km²\n", area_km²_carta1);
         printf("PIB: %.2f bilhões\n", PIB_carta1);
         printf("Pontos Turísticos: %d\n", pontos_turísticos_carta1);

             //// area pra exibicao das cartas//////

         printf("Cartas Cadastradas\n");
        
    
         printf("\n--- CARTA 2 (%s) ---\n", código_carta2);
         printf("Estado: %c\n", estado_carta2);
         printf("Cidade: %s\n", cidade_carta2);
         printf("População: %d\n", população_carta2);
         printf("Área: %.2f km²\n", area_km²_carta2);
         printf("PIB: %.2f bilhões\n", PIB_carta2);
         printf("Pontos Turísticos: %d\n", pontos_turísticos_carta2);
         
          
          
    
    
    return 0; 
}

## 🎮 Nível Novato

No nível Novato, você iniciará criando o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades. 

Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).

### 🚩 Objetivo:
- Criar cartas representando cidades, contendo as seguintes propriedades:
  - **População**
  - **Área**
  - **PIB**
  - **Número de pontos turísticos**
  
### ⚙️ Funcionalidades do Sistema:
- O sistema permitirá ao usuário cadastrar cartas de cidades, inserindo manualmente os dados via terminal de comando.
- Após o cadastro, o sistema exibirá os dados de cada cidade de forma clara e organizada.

### 📥 Entrada e 📤 Saída de Dados:
- O usuário insere os dados de cada carta interativamente.
- Após o cadastro, os dados são exibidos com todas as propriedades da cidade, uma por linha.

---

## 🛡️ Nível Aventureiro

No nível Aventureiro, você expandirá o sistema para incluir propriedades calculadas, permitindo uma análise mais detalhada das cartas.

### 🆕 Diferença em relação ao Nível Novato:
- **Novas Propriedades Calculadas:**
  - **Densidade Populacional:** População dividida pela área da cidade.
  - **PIB per Capita:** PIB total dividido pela população.

### ⚙️ Funcionalidades do Sistema:
- O sistema agora calculará automaticamente a Densidade Populacional e o PIB per Capita com base nos dados inseridos.
- Essas novas propriedades serão adicionadas às informações exibidas para cada cidade.

### 📥 Entrada e 📤 Saída de Dados:
- O usuário continua inserindo os dados de cada carta interativamente.
- O sistema exibirá os dados, incluindo as novas propriedades calculadas, de forma clara e organizada.

---

## 🏆 Nível Mestre

No nível Mestre, você implementará comparações entre as cartas, utilizando operadores relacionais e manipulando grandes números com precisão.

### 🆕 Diferença em relação ao Nível Aventureiro:
- **Comparação de Cartas:**
  - O sistema permitirá ao usuário comparar duas cartas com base nas propriedades inseridas e calculadas.
  - Cada carta terá um "Super Poder", que é a soma de todas as propriedades.
  
### ⚙️ Funcionalidades do Sistema:
- O sistema utilizará operadores relacionais para determinar a carta vencedora com base nas propriedades comparadas.
- A comparação considerará:
  - **Densidade Populacional:** Vence a carta com menor valor.
  - **Outras Propriedades:** Vence a carta com maior valor.
- O resultado das comparações será exibido claramente para cada propriedade.

### 📥 Entrada e 📤 Saída de Dados:
- O usuário insere as cartas a serem comparadas.
- O sistema exibe os resultados das comparações, indicando a carta vencedora para cada propriedade.

---

Ao concluir todos os níveis, você terá criado um sistema incial para o jogo Super Trunfo, com funcionalidades de cadastro, cálculo e comparação de propriedades. 

Boa sorte e divirta-se programando!

Equipe de Ensino - MateCheck
