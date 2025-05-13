#include <stdio.h>

int main() {

//----------- Use o exemplo com as variaveis já definidos abaixo caso queira pular o scanf ----------//

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
//---------------- "1" para vitoria da Carta1, e "0" para vitoria da Carta2 -----------------//

if (Populacao1 > Populacao2){
        printf("Populacao1 é maior que Populacao2");
} else {
        printf("Populacao2 é maior que Populacao1");
}

//--------------------------------------------------------------------------------------------//

if (Area1 > Area2){
        printf("Area1 é maior que Area2");
} else {
        printf("Area2 é maior que Area1");
}

//--------------------------------------------------------------------------------------------//

if (PIB1 > PIB2){
        printf("PIB1 é maior que PIB2");
} else {
        printf("PIB2 é maior que PIB1");
}

//--------------------------------------------------------------------------------------------//

if (NPontosTuristicos1 > NPontosTuristicos2){
        printf("NPontosTuristicos1 é maior que NPontosTuristicos2");
} else {
        printf("NPontosTuristicos2 é maior que NPontosTuristicos1");
}

//--------------------------------------------------------------------------------------------//
if (DensidadePopulacional1 < DensidadePopulacional2){
        printf("DensidadePopulacional1 é melhor que DensidadePopulacional2");
} else {
        printf("DensidadePopulacional2 é melhor que DensidadePopulacional1");
}

//--------------------------------------------------------------------------------------------//

if (PIBperCapita1 > PIBperCapita2){
        printf("PIBperCapita1 é maior que PIBperCapita2");
} else {
        printf("PIBperCapita2 é maior que PIBperCapita1");
}

//--------------------------------------Calculo do SuperPoder-------------------------------------------//

float SuperPoder1;
float SuperPoder2;

SuperPoder1 = (Populacao1 + Area1 + PIB1 + NPontosTuristicos1 + PIBperCapita1 -DensidadePopulacional1);
SuperPoder2 = (Populacao2 + Area2 + PIB2 + NPontosTuristicos2 + PIBperCapita2 -DensidadePopulacional2);

printf("SuperPoder1: %.2f - é maior que Superpoder2: %.2f ? %d\n", SuperPoder1, SuperPoder2,
                                                                    (SuperPoder1 > SuperPoder2));

//--------------------------------------------------------------------------------------------//

if (SuperPoder1 > SuperPoder1){
        printf("SuperPoder1 Venceu");
} else {
        printf("SuperPoder2 Venceu");
}

//--------------------------------------------------------------------------------------------//

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

return 0;
}