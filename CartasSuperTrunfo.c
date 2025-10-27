#include <stdio.h> 


     ///-----------declarando variavel dacarta 1 ///----------
     
     int main(void) { 
         char estado_carta1;
         char código_carta1[30];
         char cidade_carta1[30];
         int população_carta1;
         float area_km²_carta1;
         float PIB_carta1;
         int pontos_turísticos_carta1;
         float Densidade_Populacional_carta1;
         float PIB_per_Capita_carta1;
        // PIB per Capita =(float)PIB_carta1 / população_carta1;
         
        ///--------------declarando variavel carta2--------///
         
         char estado_carta2;
         char código_carta2[30];
         char cidade_carta2[30];
         int população_carta2;
         float area_km²_carta2;
         float PIB_carta2;
         int pontos_turísticos_carta2;
         float Densidade_Populacional_carta2;
         float PIB_per_Capita_carta2;
         
         ////-------------cadastro de dados carta 1----------///
         
         printf(" ---- cadastro de carta 1----\n");
         printf("Estado (A a H): ");
         scanf("%c",&estado_carta1);
         
         printf("Codigo: ");
         scanf("%s",&código_carta1);
         
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
         
         printf("Densidade Populacional");
         scanf("%f",&Densidade_Populacional_carta1);

         printf("PIB per Capita e :%2.f",PIB_per_Capita_carta1);
        

         ///--------- area  cadastro de carta 2---------///
           
           
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
         scanf("%d",&pontos_turísticos_carta2);

         printf("Densidade Populacional Carta");
         scanf("%f",&Densidade_Populacional_carta2);

         printf("PIB per Capta");
         scanf("%f",&PIB_per_Capita_carta2);

           
         /// -------exibir dados da carta 1-----------///
         
         printf("--- Cartas Cadastradas ---\n");
        
         printf("\n--- CARTA 1 (%s) ---\n", código_carta1);
         printf("Estado: %c\n", estado_carta1);
         printf("Cidade: %s\n", cidade_carta1);
         printf("População: %d\n", população_carta1);
         printf("Área: %.2f km²\n", area_km²_carta1);
         printf("PIB: %.2f bilhões\n", PIB_carta1);
         printf("Pontos Turísticos: %d\n", pontos_turísticos_carta1);
         printf("densidade populacional: %.2f\n", Densidade_Populacional_carta1);
         printf("PIB per Capita: %.2f\n", PIB_per_Capita_carta1);
         




        ///------- area pra exibicao das cartas 2------------------///

         printf("Cartas Cadastradas\n");
        
    
         printf("\n--- CARTA 2 (%s) ---\n", código_carta2);
         printf("Estado: %c\n", estado_carta2);
         printf("Cidade: %s\n", cidade_carta2);
         printf("População: %d\n", população_carta2);
         printf("Área: %.2f km²\n", area_km²_carta2);
         printf("PIB: %.2f bilhões\n", PIB_carta2);
         printf("Pontos Turísticos: %d\n", pontos_turísticos_carta2);
         printf("densidade populacional: %.2f\n", Densidade_Populacional_carta2);
         printf("PIB per Capita: %.2f\n", PIB_per_Capita_carta2);

          
    
    
    return 0; 
}
