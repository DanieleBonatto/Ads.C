#include <stdio.h>
 
 int main(){
     //Variáveis da primeira Carta:
     char Estado1, Estado2;// Usar apenas um caractere de 'A a H  para representar o estado.
     char Codigo_da_carta1[4], Codigo_da_carta2[4];//Código da carta de 'A01 a B02'
     char Nome_da_cidade1[20], Nome_da_cidade2[20];//Nomes sem espaços com limite de 19.
     unsigned int Populacao1, Populacao2;//Sem sinal (não existe população negativa).
     int Pontos_turisticos1, Pontos_turisticos2;
     float Area1, Area2; // em Km²
     float Pib1, Pib2;// Produto interno bruto
     float densidade_populacional1, densidade_populacional2;// população por km²
     float PIB_per_capita1, PIB_per_capita2;// Divisão do PIB pela população
     float Super_Poder1, Super_Poder2;// Soma de todas as variáveis numericas
 
 
     /* Cada jogador apresenta suas cartas, com as informaçoes
     de Estado, Código da carta, Nome da cidade, assim como a População
     àrea em km², pib e pontos turisticos. */

     printf("***Super Trunfo***\n\n"); 
     printf("Jogador 1 digite as informações de estado, código da carta e nome da cidade:\n");

 
     printf("Digite o estado (A-H):\n");
     scanf(" %c", &Estado1);
     printf("Digite o codigo da carta (A01 - B02):\n");
     scanf("%s", Codigo_da_carta1);
     printf("Digite o nome da cidade:\n");
     scanf("%s", Nome_da_cidade1);

     printf("Jogador 2 digite as informações de estado, código da carta e nome da cidade:\n");

     printf("Digite o estado (A-H):\n");
     scanf(" %c", &Estado2);
     printf("Digite o codigo da carta (A01 - B02):\n");
     scanf("%s", Codigo_da_carta2);
     printf("Digite o nome da cidade:\n");
     scanf("%s", Nome_da_cidade2); 

     /* Disputa entre as cartas
     disputa entrer atributos de carta contra carta*/

     printf("**Disputa entre cartas:***\n");

 
     printf("Jogador 1 Digite a população da cidade :\n");// especificador %u relacionado a unsigned
     scanf("%u", &Populacao1);
     printf("Jogador 2 Digite a população da cidade:\n");
     scanf("%u", &Populacao2);

     // estrutura de decisão composta
    if (Populacao1 > Populacao2)
    {
      printf("Carta1 venceu!\n");
    }
    else
    {
      printf("Carta 2 venceu!\n\n");
    }
    
 
     printf("Jogador 1 Digite Área total em km²:\n");// Área em km²
     scanf("%f", &Area1);
     printf("Jogador 2 Digite Área total em km²:\n");
     scanf("%f", &Area2);
     
     // estrutura de decisão composta
     if (Area1 > Area2)
    {
      printf("Carta1 venceu!\n");
    }
    else
    {
      printf("Carta 2 venceu!\n\n");
    }
 
     printf("Jogador 1 Digite o valor do PIB em reais:\n");// Produto interno bruto
     scanf("%f", &Pib1);
     printf("Jogador 2 Digite o valor do PIB em reais:\n");
     scanf("%f", &Pib2);

     // estrutura de decisão composta
     if (Pib1 > Pib2)
    {
      printf("Carta1 venceu!\n");
    }
    else
    {
      printf("Carta 2 venceu!\n\n");
    }

 
     printf("Jogador 1 Digite o número de pontos turísticos:\n");
     scanf(" %d", &Pontos_turisticos1);
     printf("Jogador 2 Digite o número de pontos turísticos:\n");
     scanf(" %d", &Pontos_turisticos2);

     // estrutura de decisão composta
     if (Pontos_turisticos1 > Pontos_turisticos2)
    {
      printf("Carta1 venceu!\n");
    }
    else
    {
      printf("Carta 2 venceu!\n\n");
    }

     printf("***Densidade populacional e PIB per capita***\n\n");
 
       // uso de casting para conversão de variavel de int para float
       
       densidade_populacional1=(float) Populacao1 / Area1;
       printf("A densidade populacional 1 é: %.4f\n", densidade_populacional1);
       densidade_populacional2=(float) Populacao2 / Area2;
       printf("A densidade populacional 2 é: %.4f\n", densidade_populacional2);

       // estrutura de decisão composta
       if (densidade_populacional1 > densidade_populacional2)
    {
      printf("Carta1 venceu!\n");
    }
    else
    {
      printf("Carta 2 venceu!\n\n");
    }

 
       PIB_per_capita1=(float) Pib1 / Populacao1;
       printf(" O pib per capta é:%.2f\n", PIB_per_capita1);
       PIB_per_capita2=(float) Pib2 / Populacao2;
       printf(" O pib per capta é:%.2f\n", PIB_per_capita2);

       // estrutura de decisão composta
       if (PIB_per_capita1 > PIB_per_capita2)
    {
      printf("Carta1 venceu!\n");
    }
    else
    {
      printf("Carta 2 venceu!\n\n");
    }

       printf("**SUPER PODER***\n\n");

       /* Soma de todos os atributos com pesos iguais
       Representa o Super poder ou total da carta*/

       Super_Poder1 =(float) Populacao1 + Area1 + Pib1 + Pontos_turisticos1 + PIB_per_capita1 + densidade_populacional1;
       printf("O resultado do super poder1 é? :%.2f\n", Super_Poder1);
 
       Super_Poder2 =(float) Populacao2 + Area2 + Pib2 + Pontos_turisticos2 + PIB_per_capita2 + densidade_populacional2;
       printf("O resultado do super poder2 é? :%.2f\n", Super_Poder2);

       // estrutura de decisão composta
       if (Super_Poder1 > Super_Poder2)
    {
      printf("Carta1 venceu!\n");
    }
    else
    {
      printf("Carta 2 venceu!\n");
    }
      
       return 0;
     }