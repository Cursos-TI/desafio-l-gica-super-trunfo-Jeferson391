#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int Escolha;

int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
char Atributo1, Atributo2, Atributo3, Atributo4, Atributo5, Atributo6, Atributo7;

//----------- Use o exemplo com o os atributos não preenchidos com o scanf que esta no fim do codigo caso queira ----------//

char Carta1[10];
char SP;
unsigned long int Populacao1 = 12325000;
float Area1 = 1521.11;
float PIB1  = 699.28;
int NPontosTuristicos1 = 50;
float DensidadePopulacional1;
float PIBperCapita1;

char Carta2[10];
char RJ;
unsigned long int Populacao2 = 67480000;
float Area2 = 1200.25;
float PIB2 = 300.50;
int NPontosTuristicos2 = 100;
float DensidadePopulacional2;
float PIBperCapita2;



            printf("\n --------Carta 1--------- \n");

printf("\n Populacao: %d \n", Populacao1);

printf("\n Area: %.2f - PIB: %.2f \n", Area1, PIB1);

printf("\n Numero de pontos turisticos: %d", NPontosTuristicos1);

PIBperCapita1 =  (PIB1 / Populacao1);
DensidadePopulacional1 = (Populacao1 / Area1);

printf("\n PIB per Capita: %.2f Densidade: %.2f \n", PIBperCapita1, DensidadePopulacional1);


            printf("\n --------Carta 2--------- \n");


printf("\n Populacao %d \n", Populacao2);

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

printf("\n1 para carta 1 - 0 para carta 2");
printf("============ Escolha qual atributo sera comprado ============ \n");
printf("\n");
printf("1. População \n");
printf("2. Area \n");
printf("3. PIB \n");
printf("4. NpontosTuristicos \n");
printf("5. Densidade \n");
printf("6. PIBperCapita \n");
printf("7. SuperPoder - Calcular valores como um todo \n");
printf("\n");
printf("Caso escolha o mesmo atributo, voce tera que reiniciar \n");
scanf("%d", &Atributo1);

switch (Atributo1)
{
    case 1:

    printf("População1: %d - População2: %d \n", Populacao1, Populacao2);

            resultado1 = (Populacao1 > Populacao2 ? 1 : 0);
            printf("resultado1: %d \n)", resultado1);

    break;
    case 2:

    printf("Area1: %.2f - Area2: %.2f \n", Area1, Area2);

            resultado2 = (Area1 > Area2 ? 1 : 0);
            printf("Resultado2: %d \n", resultado2);

    break;
    case 3:

    printf("PIB1: %.2f - PIB2: %.2f \n", PIB1, PIB2);

            resultado3 = (PIB1 > PIB2 ? 1 : 0);
                printf("Resultado: %d \n", resultado3);
            

    break;
    case 4:
        printf("NPontosTuristicos1: %d - NPontosTuristicos2: %d\n", NPontosTuristicos1, NPontosTuristicos2);
        resultado4 = (NPontosTuristicos1 > NPontosTuristicos2 ? 1 : 0);
        printf("Resultado4: %d\n", resultado4);
        break;

    case 5:
        printf("DensidadePopulacional1: %.2f - DensidadePopulacional2: %.2f\n", DensidadePopulacional1, DensidadePopulacional2);
        resultado5 = (DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0);
        printf("Resultado5: %d\n", resultado5);
        break;

    case 6:
        printf("PIBperCapita1: %.2f - PIBperCapita2: %.2f\n", PIBperCapita1, PIBperCapita2);
        resultado6 = (PIBperCapita1 > PIBperCapita2 ? 1 : 0);
        printf("Resultado6: %d\n", resultado6);
        break;

    case 7:
        printf("SuperPoder1: %.2f - SuperPoder2: %.2f\n", SuperPoder1, SuperPoder2);
        resultado7 = (SuperPoder1 > SuperPoder2 ? 1 : 0);
        printf("Resultado7: %d\n", resultado7);
        break;

    default:
        printf("Valor inválido\n");
        break;
}

printf("\n1 para carta 1 - 0 para carta 2");
printf("============ Escolha o atributo 2 ============ \n");
printf("\n");
printf("1. População \n");
printf("2. Area \n");
printf("3. PIB \n");
printf("4. NpontosTuristicos \n");
printf("5. Densidade \n");
printf("6. PIBperCapita \n");
printf("7. SuperPoder - Calcular valores como um todo \n");
printf("\n");
printf("Caso escolha o mesmo atributo, voce tera que reiniciar \n");
scanf("%d", &Atributo2);




            if (Atributo1 == Atributo2){
                    printf("Atributo ja escolhido");
            } else {




switch (Atributo2)
{
    case 1:

    printf("População1: %d - População2: %d \n", Populacao1, Populacao2);

            resultado1 = (Populacao1 > Populacao2 ? 1 : 0);
            printf("resultado1: %d \n)", resultado1);

    break;
    case 2:

    printf("Area1: %.2f - Area2: %.2f \n", Area1, Area2);

            resultado2 = (Area1 > Area2 ? 1 : 0);
            printf("Resultado2: %d \n", resultado2);

    break;
    case 3:

    printf("PIB1: %.2f - PIB2: %.2f \n", PIB1, PIB2);

            resultado3 = (PIB1 > PIB2 ? 1 : 0);
                printf("Resultado: %d \n", resultado3);
            

    break;
    case 4:
        printf("NPontosTuristicos1: %d - NPontosTuristicos2: %d\n", NPontosTuristicos1, NPontosTuristicos2);
        resultado4 = (NPontosTuristicos1 > NPontosTuristicos2 ? 1 : 0);
        printf("Resultado4: %d\n", resultado4);
        break;

    case 5:
        printf("DensidadePopulacional1: %.2f - DensidadePopulacional2: %.2f\n", DensidadePopulacional1, DensidadePopulacional2);
        resultado5 = (DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0);
        printf("Resultado5: %d\n", resultado5);
        break;

    case 6:
        printf("PIBperCapita1: %.2f - PIBperCapita2: %.2f\n", PIBperCapita1, PIBperCapita2);
        resultado6 = (PIBperCapita1 > PIBperCapita2 ? 1 : 0);
        printf("Resultado6: %d\n", resultado6);
        break;

    case 7:
        printf("SuperPoder1: %.2f - SuperPoder2: %.2f\n", SuperPoder1, SuperPoder2);
        resultado7 = (SuperPoder1 > SuperPoder2 ? 1 : 0);
        printf("Resultado7: %d\n", resultado7);
        break;

    default:
        printf("Valor inválido\n");
        break;


}}


printf("\n1 para carta 1 - 0 para carta 2");
printf("============ Escolha o atributo 3 ============ \n");
printf("\n");
printf("1. População \n");
printf("2. Area \n");
printf("3. PIB \n");
printf("4. NpontosTuristicos \n");
printf("5. Densidade \n");
printf("6. PIBperCapita \n");
printf("7. SuperPoder - Calcular valores como um todo \n");
printf("\n");
printf("Caso escolha o mesmo atributo, voce tera que reiniciar \n");
scanf("%d", &Atributo3);




            if (Atributo3 == Atributo1 || Atributo3 == Atributo2) {
                printf("Atributo já escolhido\n");
            } else {
                



switch (Atributo3)
{
    case 1:

    printf("População1: %d - População2: %d \n", Populacao1, Populacao2);

            resultado1 = (Populacao1 > Populacao2 ? 1 : 0);
            printf("resultado1: %d \n)", resultado1);

    break;
    case 2:

    printf("Area1: %.2f - Area2: %.2f \n", Area1, Area2);

            resultado2 = (Area1 > Area2 ? 1 : 0);
            printf("Resultado2: %d \n", resultado2);

    break;
    case 3:

    printf("PIB1: %.2f - PIB2: %.2f \n", PIB1, PIB2);

            resultado3 = (PIB1 > PIB2 ? 1 : 0);
                printf("Resultado: %d \n", resultado3);
            

    break;
    case 4:
        printf("NPontosTuristicos1: %d - NPontosTuristicos2: %d\n", NPontosTuristicos1, NPontosTuristicos2);
        resultado4 = (NPontosTuristicos1 > NPontosTuristicos2 ? 1 : 0);
        printf("Resultado4: %d\n", resultado4);
        break;

    case 5:
        printf("DensidadePopulacional1: %.2f - DensidadePopulacional2: %.2f\n", DensidadePopulacional1, DensidadePopulacional2);
        resultado5 = (DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0);
        printf("Resultado5: %d\n", resultado5);
        break;

    case 6:
        printf("PIBperCapita1: %.2f - PIBperCapita2: %.2f\n", PIBperCapita1, PIBperCapita2);
        resultado6 = (PIBperCapita1 > PIBperCapita2 ? 1 : 0);
        printf("Resultado6: %d\n", resultado6);
        break;

    case 7:
        printf("SuperPoder1: %.2f - SuperPoder2: %.2f\n", SuperPoder1, SuperPoder2);
        resultado7 = (SuperPoder1 > SuperPoder2 ? 1 : 0);
        printf("Resultado7: %d\n", resultado7);
        break;

    default:
        printf("Valor inválido\n");
        break;


}}


printf("\n1 para carta 1 - 0 para carta 2");
printf("============ Escolha o atributo 4 ============ \n");
printf("\n");
printf("1. População \n");
printf("2. Area \n");
printf("3. PIB \n");
printf("4. NpontosTuristicos \n");
printf("5. Densidade \n");
printf("6. PIBperCapita \n");
printf("7. SuperPoder - Calcular valores como um todo \n");
printf("\n");
printf("Caso escolha o mesmo atributo, voce tera que reiniciar \n");
scanf("%d", &Atributo4);




            if (Atributo4 == Atributo1 || Atributo4 == Atributo2 || Atributo4 == Atributo3) {
                printf("Atributo já escolhido\n");
            } else {
                



switch (Atributo4)
{
    case 1:

    printf("População1: %d - População2: %d \n", Populacao1, Populacao2);

            resultado1 = (Populacao1 > Populacao2 ? 1 : 0);
            printf("resultado1: %d \n)", resultado1);

    break;
    case 2:

    printf("Area1: %.2f - Area2: %.2f \n", Area1, Area2);

            resultado2 = (Area1 > Area2 ? 1 : 0);
            printf("Resultado2: %d \n", resultado2);

    break;
    case 3:

    printf("PIB1: %.2f - PIB2: %.2f \n", PIB1, PIB2);

            resultado3 = (PIB1 > PIB2 ? 1 : 0);
                printf("Resultado: %d \n", resultado3);
            

    break;
    case 4:
        printf("NPontosTuristicos1: %d - NPontosTuristicos2: %d\n", NPontosTuristicos1, NPontosTuristicos2);
        resultado4 = (NPontosTuristicos1 > NPontosTuristicos2 ? 1 : 0);
        printf("Resultado4: %d\n", resultado4);
        break;

    case 5:
        printf("DensidadePopulacional1: %.2f - DensidadePopulacional2: %.2f\n", DensidadePopulacional1, DensidadePopulacional2);
        resultado5 = (DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0);
        printf("Resultado5: %d\n", resultado5);
        break;

    case 6:
        printf("PIBperCapita1: %.2f - PIBperCapita2: %.2f\n", PIBperCapita1, PIBperCapita2);
        resultado6 = (PIBperCapita1 > PIBperCapita2 ? 1 : 0);
        printf("Resultado6: %d\n", resultado6);
        break;

    case 7:
        printf("SuperPoder1: %.2f - SuperPoder2: %.2f\n", SuperPoder1, SuperPoder2);
        resultado7 = (SuperPoder1 > SuperPoder2 ? 1 : 0);
        printf("Resultado7: %d\n", resultado7);
        break;

    default:
        printf("Valor inválido\n");
        break;


}}


printf("\n1 para carta 1 - 0 para carta 2");
printf("============ Escolha o atributo 5 ============ \n");
printf("\n");
printf("1. População \n");
printf("2. Area \n");
printf("3. PIB \n");
printf("4. NpontosTuristicos \n");
printf("5. Densidade \n");
printf("6. PIBperCapita \n");
printf("7. SuperPoder - Calcular valores como um todo \n");
printf("\n");
printf("Caso escolha o mesmo atributo, voce tera que reiniciar \n");
scanf("%d", &Atributo5);




            if (Atributo5 == Atributo1 || Atributo5 == Atributo2 || Atributo5 == Atributo3 ||
                Atributo5 == Atributo4) {
                printf("Atributo já escolhido\n");
            } else {
                



switch (Atributo5)
{
    case 1:

    printf("População1: %d - População2: %d \n", Populacao1, Populacao2);

            resultado1 = (Populacao1 > Populacao2 ? 1 : 0);
            printf("resultado1: %d \n)", resultado1);

    break;
    case 2:

    printf("Area1: %.2f - Area2: %.2f \n", Area1, Area2);

            resultado2 = (Area1 > Area2 ? 1 : 0);
            printf("Resultado2: %d \n", resultado2);

    break;
    case 3:

    printf("PIB1: %.2f - PIB2: %.2f \n", PIB1, PIB2);

            resultado3 = (PIB1 > PIB2 ? 1 : 0);
                printf("Resultado: %d \n", resultado3);
            

    break;
    case 4:
        printf("NPontosTuristicos1: %d - NPontosTuristicos2: %d\n", NPontosTuristicos1, NPontosTuristicos2);
        resultado4 = (NPontosTuristicos1 > NPontosTuristicos2 ? 1 : 0);
        printf("Resultado4: %d\n", resultado4);
        break;

    case 5:
        printf("DensidadePopulacional1: %.2f - DensidadePopulacional2: %.2f\n", DensidadePopulacional1, DensidadePopulacional2);
        resultado5 = (DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0);
        printf("Resultado5: %d\n", resultado5);
        break;

    case 6:
        printf("PIBperCapita1: %.2f - PIBperCapita2: %.2f\n", PIBperCapita1, PIBperCapita2);
        resultado6 = (PIBperCapita1 > PIBperCapita2 ? 1 : 0);
        printf("Resultado6: %d\n", resultado6);
        break;

    case 7:
        printf("SuperPoder1: %.2f - SuperPoder2: %.2f\n", SuperPoder1, SuperPoder2);
        resultado7 = (SuperPoder1 > SuperPoder2 ? 1 : 0);
        printf("Resultado7: %d\n", resultado7);
        break;

    default:
        printf("Valor inválido\n");
        break;


}}


printf("\n1 para carta 1 - 0 para carta 2");
printf("============ Escolha o atributo 6 ============ \n");
printf("\n");
printf("1. População \n");
printf("2. Area \n");
printf("3. PIB \n");
printf("4. NpontosTuristicos \n");
printf("5. Densidade \n");
printf("6. PIBperCapita \n");
printf("7. SuperPoder - Calcular valores como um todo \n");
printf("\n");
printf("Caso escolha o mesmo atributo, voce tera que reiniciar \n");
scanf("%d", &Atributo6);




            if (Atributo6 == Atributo1 || Atributo6 == Atributo2 || Atributo6 == Atributo3 ||
                Atributo6 == Atributo4 || Atributo6 == Atributo5) {
                printf("Atributo já escolhido\n");
            } else {
                



switch (Atributo6)
{
    case 1:

    printf("População1: %d - População2: %d \n", Populacao1, Populacao2);

            resultado1 = (Populacao1 > Populacao2 ? 1 : 0);
            printf("resultado1: %d \n)", resultado1);

    break;
    case 2:

    printf("Area1: %.2f - Area2: %.2f \n", Area1, Area2);

            resultado2 = (Area1 > Area2 ? 1 : 0);
            printf("Resultado2: %d \n", resultado2);

    break;
    case 3:

    printf("PIB1: %.2f - PIB2: %.2f \n", PIB1, PIB2);

            resultado3 = (PIB1 > PIB2 ? 1 : 0);
                printf("Resultado: %d \n", resultado3);
            

    break;
    case 4:
        printf("NPontosTuristicos1: %d - NPontosTuristicos2: %d\n", NPontosTuristicos1, NPontosTuristicos2);
        resultado4 = (NPontosTuristicos1 > NPontosTuristicos2 ? 1 : 0);
        printf("Resultado4: %d\n", resultado4);
        break;

    case 5:
        printf("DensidadePopulacional1: %.2f - DensidadePopulacional2: %.2f\n", DensidadePopulacional1, DensidadePopulacional2);
        resultado5 = (DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0);
        printf("Resultado5: %d\n", resultado5);
        break;

    case 6:
        printf("PIBperCapita1: %.2f - PIBperCapita2: %.2f\n", PIBperCapita1, PIBperCapita2);
        resultado6 = (PIBperCapita1 > PIBperCapita2 ? 1 : 0);
        printf("Resultado6: %d\n", resultado6);
        break;

    case 7:
        printf("SuperPoder1: %.2f - SuperPoder2: %.2f\n", SuperPoder1, SuperPoder2);
        resultado7 = (SuperPoder1 > SuperPoder2 ? 1 : 0);
        printf("Resultado7: %d\n", resultado7);
        break;

    default:
        printf("Valor inválido\n");
        break;


}}


printf("\n1 para carta 1 - 0 para carta 2");
printf("============ Escolha o atributo 7 ============ \n");
printf("\n");
printf("1. População \n");
printf("2. Area \n");
printf("3. PIB \n");
printf("4. NpontosTuristicos \n");
printf("5. Densidade \n");
printf("6. PIBperCapita \n");
printf("7. SuperPoder - Calcular valores como um todo \n");
printf("\n");
printf("Caso escolha o mesmo atributo, voce tera que reiniciar \n");
scanf("%d", &Atributo7);




            if (Atributo7 == Atributo1 || Atributo7 == Atributo2 || Atributo7 == Atributo3 ||
                Atributo7 == Atributo4 || Atributo7 == Atributo5 || Atributo7 == Atributo6) {
                printf("Atributo já escolhido\n");
            } else {
                



switch (Atributo7)
{
    case 1:

    printf("População1: %d - População2: %d \n", Populacao1, Populacao2);

            resultado1 = (Populacao1 > Populacao2 ? 1 : 0);
            printf("resultado1: %d \n)", resultado1);

    break;
    case 2:

    printf("Area1: %.2f - Area2: %.2f \n", Area1, Area2);

            resultado2 = (Area1 > Area2 ? 1 : 0);
            printf("Resultado2: %d \n", resultado2);

    break;
    case 3:

    printf("PIB1: %.2f - PIB2: %.2f \n", PIB1, PIB2);

            resultado3 = (PIB1 > PIB2 ? 1 : 0);
                printf("Resultado: %d \n", resultado3);
            

    break;
    case 4:
        printf("NPontosTuristicos1: %d - NPontosTuristicos2: %d\n", NPontosTuristicos1, NPontosTuristicos2);
        resultado4 = (NPontosTuristicos1 > NPontosTuristicos2 ? 1 : 0);
        printf("Resultado4: %d\n", resultado4);
        break;

    case 5:
        printf("DensidadePopulacional1: %.2f - DensidadePopulacional2: %.2f\n", DensidadePopulacional1, DensidadePopulacional2);
        resultado5 = (DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0);
        printf("Resultado5: %d\n", resultado5);
        break;

    case 6:
        printf("PIBperCapita1: %.2f - PIBperCapita2: %.2f\n", PIBperCapita1, PIBperCapita2);
        resultado6 = (PIBperCapita1 > PIBperCapita2 ? 1 : 0);
        printf("Resultado6: %d\n", resultado6);
        break;

    case 7:
        printf("SuperPoder1: %.2f - SuperPoder2: %.2f\n", SuperPoder1, SuperPoder2);
        resultado7 = (SuperPoder1 > SuperPoder2 ? 1 : 0);
        printf("Resultado7: %d\n", resultado7);
        break;

    default:
        printf("Valor inválido\n");
        break;


}}

int ResultadoFinal;
ResultadoFinal = (resultado1 + resultado2 + resultado3 + resultado4 + resultado5 + resultado6 + resultado7);

    printf("\n");
    printf("para que a carta 1 ganhe, o resultado final deve ser: 4 ou mais");
        printf("\n");
        printf("Resultado final: %d", ResultadoFinal);
        printf("\n");

if (ResultadoFinal > 3){
    printf("\n");
    printf("Carta 1 venceu");
    printf("\n");
} else {
    printf("\n");
    printf("Carta 2 venceu");
    printf("\n");
}
 

return 0;
}

//Use esse exemplo com scanf se preferir

// char Carta1[10];
// char Estado1[10];
// char Codigo1[10];
// char NomedaCidade1[10];
// unsigned long int Populacao1;
// float Area1;
// float PIB1;
// int NPontosTuristicos1;
// float DensidadePopulacional1;
// float PIBperCapita1;
    

// char Carta2[10];
// char Estado2[10];
// char Codigo2[10];
// char NomedaCidade2[10];
// unsigned long int Populacao2;
// float Area2;
// float PIB2;
// int NPontosTuristicos2;
// float DensidadePopulacional2;
// float PIBperCapita2;

// //-----------------------------Informação dos Dados------------------------------//

// printf("\n ---Cart 1--- \n");


// printf("Digite o Estado \n");
// scanf("%10s", Estado1);

// printf("Digite o codigo de 1 letra e 2 numeros \n");
// scanf("%10s", Codigo1);

// printf("Digite o nome da cidade  \n");
// scanf("%10s", NomedaCidade1);

// printf("digite o numero populacional \n");
// scanf("%d", &Populacao1);

// printf("Digite a Area da cidade \n");
// scanf("%f", &Area1);

// printf("Digite o PIB \n");
// scanf("%f", &PIB1);

// printf("Digite a quantidade de pontos turisticos \n");
// scanf("%f", &NPontosTuristicos1);

// //-----------------------------------------------------------//

// printf("\n ---Cart 2--- \n");


// printf("Digite o Estado \n");
// scanf("%10s", Estado2);

// printf("Digite o codigo de 1 letra e 2 numeros \n");
// scanf("%10s", Codigo2);

// printf("Digite o nome da cidade  \n");
// scanf("%10s", NomedaCidade2);

// printf("digite o numero populacional \n");
// scanf("%d", &Populacao2);

// printf("Digite a Area da cidade \n");
// scanf("%f", &Area2);

// printf("Digite o PIB \n");
// scanf("%f", &PIB2);

// printf("Digite a quantidade de pontos turisticos \n");
// scanf("%f", &NPontosTuristicos2);
    
// //-----------------------------Informações de PIBperCapita e DensidadePopulacional------------------------------//

//             printf("\n --------Carta 1--------- \n");

// printf("\n Nome: %s - Populacao %d \n", NomedaCidade1, Populacao1);

// printf("\n Area: %.2f - PIB: %.2f \n", Area1, PIB1);

// printf("\n Numero de pontos turisticos: %d", NPontosTuristicos1);

// PIBperCapita1 =  (PIB1 / Populacao1);
// DensidadePopulacional1 = (Populacao1 / Area1);

// printf("\n PIB per Capita: %.2f Densidade: %.2f \n", PIBperCapita1, DensidadePopulacional1);


//             printf("\n --------Carta 2--------- \n");


// printf("\n Nome: %s - Populacao %d \n", NomedaCidade2, Populacao2);

// printf("\n Area: %.2f - PIB: %.2f \n", Area2, PIB2);

// printf("\n Numero de pontos turisticos: %d", NPontosTuristicos2);

// PIBperCapita2 =  (PIB2 / Populacao2);
// DensidadePopulacional2 = (Populacao2 / Area2);

// printf("\n PIB per Capita: %.2f Densidade: %.2f \n", PIBperCapita2, DensidadePopulacional2);


//--------------------------------------------------------------------------------------------//