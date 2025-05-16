#include <stdio.h>

int main() {

int Escolha;

//----------- Use o exemplo com as variaveis já definidos abaixo do copdigo caso queira pular o scanf ----------//

char Carta1[10];
char Estado1[10];
char Codigo1[10];
char NomedaCidade1[10];
unsigned long int Populacao1;
float Area1;
float PIB1;
int NPontosTuristicos1;
float DensidadePopulacional1;
float PIBperCapita1;
    

char Carta2[10];
char Estado2[10];
char Codigo2[10];
char NomedaCidade2[10];
unsigned long int Populacao2;
float Area2;
float PIB2;
int NPontosTuristicos2;
float DensidadePopulacional2;
float PIBperCapita2;

//-----------------------------Informação dos Dados------------------------------//

printf("\n ---Cart 1--- \n");


printf("Digite o Estado \n");
scanf("%10s", Estado1);

printf("Digite o codigo de 1 letra e 2 numeros \n");
scanf("%10s", Codigo1);

printf("Digite o nome da cidade  \n");
scanf("%10s", NomedaCidade1);

printf("digite o numero populacional \n");
scanf("%d", &Populacao1);

printf("Digite a Area da cidade \n");
scanf("%f", &Area1);

printf("Digite o PIB \n");
scanf("%f", &PIB1);

printf("Digite a quantidade de pontos turisticos \n");
scanf("%f", &NPontosTuristicos1);

//-----------------------------------------------------------//

printf("\n ---Cart 2--- \n");


printf("Digite o Estado \n");
scanf("%10s", Estado2);

printf("Digite o codigo de 1 letra e 2 numeros \n");
scanf("%10s", Codigo2);

printf("Digite o nome da cidade  \n");
scanf("%10s", NomedaCidade2);

printf("digite o numero populacional \n");
scanf("%d", &Populacao2);

printf("Digite a Area da cidade \n");
scanf("%f", &Area2);

printf("Digite o PIB \n");
scanf("%f", &PIB2);

printf("Digite a quantidade de pontos turisticos \n");
scanf("%f", &NPontosTuristicos2);
    
//-----------------------------Informações de PIBperCapita e DensidadePopulacional------------------------------//

            printf("\n --------Carta 1--------- \n");

printf("\n Nome: %s - Populacao %d \n", NomedaCidade1, Populacao1);

printf("\n Area: %.2f - PIB: %.2f \n", Area1, PIB1);

printf("\n Numero de pontos turisticos: %d", NPontosTuristicos1);

PIBperCapita1 =  (PIB1 / Populacao1);
DensidadePopulacional1 = (Populacao1 / Area1);

printf("\n PIB per Capita: %.2f Densidade: %.2f \n", PIBperCapita1, DensidadePopulacional1);


            printf("\n --------Carta 2--------- \n");


printf("\n Nome: %s - Populacao %d \n", NomedaCidade2, Populacao2);

printf("\n Area: %.2f - PIB: %.2f \n", Area2, PIB2);

printf("\n Numero de pontos turisticos: %d", NPontosTuristicos2);

PIBperCapita2 =  (PIB2 / Populacao2);
DensidadePopulacional2 = (Populacao2 / Area2);

printf("\n PIB per Capita: %.2f Densidade: %.2f \n", PIBperCapita2, DensidadePopulacional2);


//-------------------------------------- Resultados -----------------------------------------//
//-------------------------------------------------------------------------------------------//
//----------------------------------Calculo do SuperPoder------------------------------------//

float SuperPoder1;
float SuperPoder2;

SuperPoder1 = (Populacao1 + Area1 + PIB1 + NPontosTuristicos1 + PIBperCapita1 -DensidadePopulacional1);
SuperPoder2 = (Populacao2 + Area2 + PIB2 + NPontosTuristicos2 + PIBperCapita2 -DensidadePopulacional2);

//--------------------------------------------------------------------------------------------//

printf("============ Escolha qual atributo sera comprado ============ \n");
printf("1. População \n");
printf("2. Area \n");
printf("3. PIB \n");
printf("4. NpontosTuristicos \n");
printf("5. Densidade \n");
printf("6. PIBperCapita \n");
printf("7. SuperPoder - Calcular valores como um todo \n");
scanf("%d", &Escolha);

switch (Escolha)
{
case 1:

    printf("População1: %d - População2: %d \n", Populacao1, Populacao2);

            if (Populacao1 > Populacao2){
                        printf("Populacao1 é maior que Populacao2 \n");
            } else if (Populacao2 > Populacao1){
                        printf("Populacao2 é maior que Populacao1 \n");
            } else {
                        printf("Empate \n");
            }


    break;
case 2:

    printf("Area1: %.2f - Area2: %.2f \n", Area1, Area2);

            if (Area1 > Area2){
                    printf("Area1 é maior que Area2 \n");
            } else if (Area2 > Area1){
                    printf("Area2 é maior que Area1 \n");
            } else {
                    printf("Empate \n");
            }

    break;
case 3:

    printf("PIB1: %.2f - PIB2: %.2f \n", PIB1, PIB2);

            if (PIB1 > PIB2){
                    printf("PIB1 é maior que PIB2 \n");
            } else if (PIB2 > PIB1){
                    printf("PIB2 é maior que PIB1 \n");
            } else { 
                    printf("Empate \n");
            }
            

    break;
case 4:

    printf("NPontosTuristicos1: %d - NPontosTuristicos1: %d \n", NPontosTuristicos1, NPontosTuristicos2);

            if (NPontosTuristicos1 > NPontosTuristicos2){
                    printf("NPontosTuristicos1 é maior que NPontosTuristicos2 \n");
            } else if (NPontosTuristicos2 > NPontosTuristicos1){
                    printf("NPontosTuristicos2 é maior que NPontosTuristicos1 \n");
            } else {
                    printf("Empate \n");
            }

    break;
case 5:

    printf("DensidadePopulacional1: %.2f - DensidadePopulacional2: %.2f \n", DensidadePopulacional1, DensidadePopulacional2);

            if (DensidadePopulacional1 < DensidadePopulacional2){
                    printf("DensidadePopulacional1 é melhor que DensidadePopulacional2 \n");
            } else if (DensidadePopulacional2 < DensidadePopulacional1){
                    printf("DensidadePopulacional2 é melhor que DensidadePopulacional1 \n");
            } else {
                    printf("Empate \n");
            }

    break;
case 6:

    printf("PIBperCapita1: %.2f - PIBperCapita2: %.2f \n", PIBperCapita1, PIBperCapita2);

            if (PIBperCapita1 > PIBperCapita2){
                    printf("PIBperCapita1 é maior que PIBperCapita2 \n");
            } else if (PIBperCapita2 > PIBperCapita1){
                    printf("PIBperCapita2 é maior que PIBperCapita1 \n");
            } else {
                    printf("Empate \n");
            }

    break;
case 7:

    printf("SuperPoder1: %.2f - SuperPoder2: %.2f \n", SuperPoder1, SuperPoder2);

            if (SuperPoder1 > SuperPoder2){
                    printf("SuperPoder1 Venceu \n");
            } else if (SuperPoder2 > SuperPoder1){
                    printf("SuperPoder2 Venceu \n");
            } else {
                    printf("Empate \n");
            }

    break;
default:
            printf("Valor invalido");
    break;
}

return 0;
}

//Use esse exemplo se preferir

// char Carta1[10];
// char SP;
// unsigned long int Populacao1 = 12325000;
// float Area1 = 1521.11;
// float PIB1  = 699.28;
// int NPontosTuristicos1 = 50;
// float DensidadePopulacional1;
// float PIBperCapita1;

// char Carta2[10];
// char RJ;
// unsigned long int Populacao2 = 67480000;
// float Area2 = 1200.25;
// float PIB2 = 300.50;
// int NPontosTuristicos2 = 100;
// float DensidadePopulacional2;
// float PIBperCapita2;



//             printf("\n --------Carta 1--------- \n");

// printf("\n Populacao %d \n", Populacao1);

// printf("\n Area: %.2f - PIB: %.2f \n", Area1, PIB1);

// printf("\n Numero de pontos turisticos: %d", NPontosTuristicos1);

// PIBperCapita1 =  (PIB1 / Populacao1);
// DensidadePopulacional1 = (Populacao1 / Area1);

// printf("\n PIB per Capita: %.2f Densidade: %.2f \n", PIBperCapita1, DensidadePopulacional1);


//             printf("\n --------Carta 2--------- \n");


// printf("\n Populacao %d \n", Populacao2);

// printf("\n Area: %.2f - PIB: %.2f \n", Area2, PIB2);

// printf("\n Numero de pontos turisticos: %d", NPontosTuristicos2);

// PIBperCapita2 =  (PIB2 / Populacao2);
// DensidadePopulacional2 = (Populacao2 / Area2);

// printf("\n PIB per Capita: %.2f Densidade: %.2f \n", PIBperCapita2, DensidadePopulacional2);


//--------------------------------------------------------------------------------------------//