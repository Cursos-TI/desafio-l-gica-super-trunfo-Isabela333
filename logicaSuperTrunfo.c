#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
     // Área para definição das variáveis para armazenar as propriedades das cidades
    // Variáveis da Carta 1
    char Estado1;
    char Codigo1[4];
    char NomedaCidade1[50];
    unsigned long int Populacao1;
    float Area1;
    float PIB1;
    int NumerosdePontosTuristicos1;
    float DensidadePopulacional1;
    float PIBperCapita1;
    float SuperPoder1;
    

    // Variáveis da Carta 2
    char Estado2;
    char Codigo2[4];
    char NomedaCidade2[50];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int NumerosdePontosTuristicos2;
    float DensidadePopulacional2;
    float PIBperCapita2;
    float SuperPoder2;

   
  // Área para entrada de dados
  // Cadastro da Carta 1
printf("=== Cadastro Da Carta 1 ===\n");
printf("Estado (A-H): ");
scanf(" %c", &Estado1);
printf("Codigo da carta (A01,B02...): ");
scanf(" %s", Codigo1);
printf("Nome da cidades: ");
scanf(" %[^\n]", NomedaCidade1);
printf("Populacao: ");
scanf("%lu", &Populacao1);
printf("Area (Km2): ");
scanf("%f", &Area1);
printf("PIB: ");
scanf("%f", &PIB1);
printf("Numeros de pontos turisticos: ");
scanf("%d", &NumerosdePontosTuristicos1);
DensidadePopulacional1 = (float)Populacao1 / Area1;
PIBperCapita1 = (PIB1 * 1000000000.0) / Populacao1;
SuperPoder1 = (float)Populacao1 + Area1 + PIB1 + NumerosdePontosTuristicos1 + PIBperCapita1 + (1 / DensidadePopulacional1);

// Cadastro da Carta 2
printf("===Cadastro Da Carta 2 ===\n");
printf("Estado (A-H): ");
scanf(" %c", &Estado2);
printf("Codigo da carta (A01,B02...): ");
scanf(" %s", Codigo2);
printf("Nome da Cidade: ");
scanf(" %[^\n]", NomedaCidade2);
printf("Populacao: ");
scanf (" %lu", &Populacao2);
printf("Area (Km2): ");
scanf(" %f", &Area2);
printf("PIB: ");
scanf(" %f", &PIB2);
printf("Numeros de pontos turisticos: ");
scanf(" %d", &NumerosdePontosTuristicos2);
DensidadePopulacional2 = (float)Populacao2 / Area2;
PIBperCapita2 = (PIB2 * 1000000000.0) / Populacao2;
SuperPoder2 = (float)Populacao2 + Area2 + PIB2 + NumerosdePontosTuristicos2 + PIBperCapita2 + (1 / DensidadePopulacional2);




  // Área para exibição dos dados da cidade
// Exibição da Carta 1
printf("\n========== Carta 1 ==========\n");
printf("Estado: %c\n", Estado1);
printf("Codigo: %s\n", Codigo1);
printf("Nome da cidade: %s\n", NomedaCidade1);
printf("Populacao: %lu\n", Populacao1);
printf("Area: %.2f Km2\n", Area1);
printf("PIB: %.2f\n", PIB1);
printf("Numero de pontos turisticos1: %d\n", NumerosdePontosTuristicos1);
printf("Densidade Populacional: %.2f hab/km2\n", DensidadePopulacional1);
printf("PIB per Capita: %.2f reais\n", PIBperCapita1);
printf("\n=== Comparacao das Cartas ===\n");
printf("Populacao: Carta %d) venceu (%d)\n", Populacao1 > Populacao2 ? 1 : 2, Populacao1 > Populacao2);
printf("Area: Carta %d venceu (%d)\n", Area1 > Area2 ? 1 : 2, Area1 > Area2);
printf("PIB: Carta %d venceu (%d)\n[]", PIB1 > PIB2 ? 1 : 2, PIB1 > PIB2);
printf("PontosTuristicos: Carta %d venceu (%d)\n", NumerosdePontosTuristicos1 > NumerosdePontosTuristicos2 ? 1 : 2, NumerosdePontosTuristicos1 > NumerosdePontosTuristicos2);
printf("DensidadePopulacional: Carta %d venceu (%d)\n", DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 2, DensidadePopulacional1 < DensidadePopulacional2);
printf("PIB per Capita: Carta %d venceu (%d)\n", PIBperCapita1 > PIBperCapita2 ? 1 : 2, PIBperCapita1 > PIBperCapita2);
printf("Super Poder: Carta %d venceu (%d)\n", SuperPoder1 > SuperPoder2 ? 1 : 2, SuperPoder1 > SuperPoder2);

// Exibiçãp da Carta 2
printf("\n========== Carta 2 ==========\n");
printf("Estado: %c\n", Estado2);
printf("Codigo: %s\n", Codigo2);
printf("Nome da Cidade: %s\n", NomedaCidade2);
printf("Populacao: %lu\n", Populacao2);
printf("Area: %.2f Km2\n", Area2);
printf("PIB: %.2f\n", PIB2);
printf ("Numros de pontos turisticos: %d\n", NumerosdePontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km2\n", DensidadePopulacional2);
printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
printf("\n=== Comparacao das Cartas ===\n");
printf("Populacao: Carta %d vence (%d)\n", Populacao1 > Populacao2 ? 1 : 2, Populacao1 > Populacao2);
printf("Area: Carta %d venceu (%d)\n", Area1 > Area2 ? 1 : 2, Area1 > Area2);
printf("PIB: Carta %d venceu (%d)\n", PIB1 > PIB2 ? 1 : 2, PIB1 > PIB2);
printf("PontosTuristicos: Carta %d venceu (%d)\n)", NumerosdePontosTuristicos1 > NumerosdePontosTuristicos2 ? 1 : 2, NumerosdePontosTuristicos1 > NumerosdePontosTuristicos2);
printf("DensidadePopulacional: Carta %d venceu (%d)\n", DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 2, DensidadePopulacional1 < DensidadePopulacional2);
printf("PIB per Capita: Carta %d venceu (%d)\n", PIBperCapita1 > PIBperCapita2 ? 1 : 2, PIBperCapita1 > PIBperCapita2);
printf("Super Poder: Carta %d venceu (%d)\n", SuperPoder1 > SuperPoder2 ? 1 : 2, SuperPoder1 > SuperPoder2);



    // Menu de comparação das cartas
    printf("\n===  MENU DE COMPARAÇÃO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Escolha um tributo: ");
    scanf("%d", &opcao);

    switch (opcao) {

    case 1: 
      printf("\n=== COMPARAÇÃO DAS CARTAS ===\n");
      printf("Atributo escolhido: Populacao\n\n");

      printf("Carta 1 - %s: %lu habitantes\n", NomedaCidade1, Populacao1);
      printf("Carta 2 - %s: %lu habitantes\n", NomedaCidade2);

      if (Populacao1 > Populacao2)
      printf("%s venceu!\n", NomedaCidade1);
    } else if ( Populacao2 > Populacao1) {
      printf("%s venceu!\n", NomedaCidade2);
    } else {
      printf(" Empate!\n");
    }
    break;

    case 2:
    printf("\n=== COMPARAÇÃO DAS CARTAS ===\n");
    printf("Atributo escolhido: Area\n\n");
    
    printf("Carta 1 - %s: %.2f km²\n", NomedaCidade1, Area1);
    printf("carta 2 - %s: %.2f km²\n", NomedaCidade2, Area2); 

      if (Area1 > Area2) {
      printf("%s venceu!\n", NomedaCidade1);
    } else if (Area2 > Area1) {
      printf("%s venceu!\n", NomedaCidade2);
    } else {
      printf("Empate!\n");
    }
    break;

    case 3:
    printf("\n=== COMPARAÇÃO DAS CARTAS ===\n");
    printf(" Atributo escolhido: PIB\n\n");

    printf("Carta 1 - %s: %.2f\n", NomedaCidade1, PIB1);
    printf("Carta 2 - %s: %.2f\n", NomedaCidade2, PIB2);
    
    if (PIB1 > PIB2) {
    printf("%s venceu!\n", NomedaCidade1);
  } else if (PIB2 > PIB1) {
    printf("%s vence!\n", NomedaCidade2);
  } else { 
    printf("Empate!\n");
  }
    break;

    case 4:
    printf("\n=== COMPARAÇÃO DAS CARTAS ===\n");
    printf(" Atributo escolhido: Pontos Turísticos\n\n");

    printf("Carta 1 - %s: %d pontos turisticos\n", NomedaCidade1, NumerosdePontosTuristicos1);
    printf("Carta 2 - %s: %d pontos turisticos\n", NomedaCidade2, NumerosdePontosTuristicos2);

    if NumerosdePontosTuristicos1 > NumerosdePontosTuristicos2) {
    printf("%s venceu!\n", NomedaCidade1);
  } else if (NumerosdePontosTuristicos2 > NumerosdePontosTuristicos1) {
    printf("%s venceu!\n", NomedaCidade2);
  } else {
    printf(" Empate!\n");
  }
  break;
  
  case 5:
   printf("\n=== COMPARAÇÃO DAS CARTAS ===\n");
   printf(" Atributo escolhido: Densidade Demográfica\n\n");

   printf("Carta 1 - %s: %.2f hab/km²\n", NomedaCidade1, DensidadePopulacional1);
   printf("Carta 2 - %s: %.2f hab/km²\n", NomedaCidade2, DensidadePopulacional2);

   // Na densidade, o MENOR valor vence

   if (DensidadePopulacional1 < DensidadePopulacional2) {
   printf("%s venceu!\n", NomedaCidade1);
 } else if (DensidadePopulacional2 < DensidadePopulacional1) {
   printf("%s venceu!\n", NomedaCidade2);
 } else {
  printf("Empate\n");
 }
  
  break;
  
default:
 printf("Opção inválida!\n");

  
 return 0;
}



  
    



    

  

    

   

